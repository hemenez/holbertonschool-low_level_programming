#include "binary_trees.h"
/**
 * binary_tree_size - fxn measures size of binary tree
 * @tree: pointer to root node of tree to measure size
 * Return: fxn returns size of binary tree, or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
		return (0);
	count_left = binary_tree_size(tree->left);
	count_right = binary_tree_size(tree->right);
	return (count_left + count_right + 1);
}
