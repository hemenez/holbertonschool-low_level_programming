#include "binary_trees.h"
/**
 * binary_tree_depth - fxn measures depth of a node in binary tree
 * @node: pointer to the node to measure depth of
 * Return: function returns depth of node, or 0 if node is NULL
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count;

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (0);
	count = binary_tree_depth(node->parent);
	return (count + 1);
}
