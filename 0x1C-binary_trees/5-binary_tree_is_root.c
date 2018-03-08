#include "binary_trees.h"
/**
 * binary_tree_is_root - fxn checks if node is a root
 * @node: pointer to the node to check
 * Return: fxn returns 1 if node is root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL && node != NULL)
		return (1);
	return (0);
}
