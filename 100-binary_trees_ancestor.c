#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	int h1 = 0, h2 = 0, diff = 0, i = 0;

	if (first == NULL || second == NULL)
		return (NULL);

	h1 = binary_tree_depth(first);
	h2 = binary_tree_depth(second);
	diff = h1 >= h2 ? h1 - h2 : h2 - h1;

	for (i = 0; i < diff; i++)
	{
		if (h1 > h2)
			first = first->parent;
		if (h2 > h1)
			second = second->parent;
	}

	while (first && second && first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	return (first == second ? (binary_tree_t *)first : NULL);
}
