#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the roor node of the tree
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0;

	if (tree && ((tree->left && tree->right) ||
				(!(tree->left) && !(tree->right))))
	{
		if (tree->left && tree->right)
		{
			l_tree = binary_tree_is_full(tree->left);
			r_tree = binary_tree_is_full(tree->right);
			if (l_tree && r_tree)
				return (1);
			return (0);
		}
		else if (!(tree->left) && !(tree->right))
			return (1);
		else
			return (0);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, is_full = 0;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	is_full = binary_tree_is_full(tree);

	if ((l_height == r_height) && is_full)
		return (1);
	return (0);
}
