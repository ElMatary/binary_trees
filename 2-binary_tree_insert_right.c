#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to node
 * @value: value to store in the new node
 * Return: a pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);

	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
		return (NULL);

	if (parent->right)
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
