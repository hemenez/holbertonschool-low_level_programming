#include "binary_trees.h"
/**
 * binary_tree_nodes - fxn counts nodes w/ at least 1 child in tree
 * @tree: pointer to the root node of tree to count # of nodes
 * Return: fxn returns # of nodes w/ at least 1 child, 0 if fails
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	count_left = binary_tree_nodes(tree->left);
	count_right = binary_tree_nodes(tree->right);
	return (count_left + count_right + 1);
}
