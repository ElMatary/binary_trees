#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: pointer to parent node
 * @value: value to put in the new node
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->left = NULL;
	n_node->right = NULL;
	n_node->n = value;
	n_node->parent = parent;

	return (n_node);
}
