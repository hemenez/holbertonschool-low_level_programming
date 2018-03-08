#include "binary_trees.h"
/**
 * binary_tree_leaves - fxn counts leaves in a binary tree
 * @tree: pointer to the root node of the tree to count # of leaves
 * Return: fxn returns 0 if tree is NULL, otherwise returns # of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);
	return (count_left + count_right);
}
