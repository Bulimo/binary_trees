#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of another node
 * @parent: pointer to the node to insert left child in
 * @value: value to store in the new node
 * Return: pointer to new node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_left_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->left)
	{
		old_left_node = parent->left;
		parent->left = new_node;
		old_left_node->parent = new_node;
		new_node->left = old_left_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}
