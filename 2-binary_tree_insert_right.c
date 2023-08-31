#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: the value to store in the new node
 * Return: pointer to the new node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_right_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right)
	{
		old_right_node = parent->right;
		parent->right = new_node;
		old_right_node->parent = new_node;
		new_node->right = old_right_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
