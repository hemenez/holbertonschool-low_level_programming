#include "binary_trees.h"
/**
 * helper_function - function assists in finding height of binary tree
 * @tree: pointer to root node of the tree to measure the height
 * Return: function returns 0 if tree is NULL, or height + 1 if not NULL
 */

size_t helper_function(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;

	if (tree == NULL)
		return (0);
	count_left = helper_function(tree->left);
	count_right = helper_function(tree->right);
	if (count_left > count_right)
		return (count_left + 1);
	else
		return (count_right + 1);
	return (0);
}
/**
 * binary_tree_height - function measures height of binary tree
 * @tree: pointer to root node of tree to measure height
 * Return: if tree is NULL, fxn returns 0, else returns height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = helper_function(tree);
	return (height - 1);
}
