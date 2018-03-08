#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if node is a leaf
 * @node: pointer to the node to check
 * Return: function returns 1 if node is leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL && node != NULL)
		return (1);
	return (0);
}
