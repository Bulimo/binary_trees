#include "binary_trees.h"

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
