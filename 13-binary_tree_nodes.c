#include "binary_trees.h"
/**
 * binary_tree_nodes - func count nodes with at least 1 child in binary tree
 * @tree: pointer to root node
 *
 * Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_ nodes = 0;

	if (tree)
	{
		n_nodes += (tree->left || tree->right) ? 1 : 0;
		n_nodes += binary_tree_nodes(tree->left);
		n_nodes += binary_tree_nodes(tree->right);
	}
	return (n_nodes);
}
