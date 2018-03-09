#include "binary_trees.h"
/**
 * binary_tree_is_full - fxn checks if binary tree is full
 * @tree: pointer to root node of tree to check
 * Return: fxn returns 1 if full, 0 if NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_left;
	int count_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	count_left = binary_tree_is_full(tree->left);
	count_right = binary_tree_is_full(tree->right);
	if (count_left + count_right != 0)
		return (0);
	else
		return (1);
}
