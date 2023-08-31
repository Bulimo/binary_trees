#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		nodes = 1;
		nodes += tree->left ? binary_tree_nodes(tree->left) : 0;
		nodes += tree->right ? binary_tree_nodes(tree->right) : 0;
	}

	return (nodes);
}
