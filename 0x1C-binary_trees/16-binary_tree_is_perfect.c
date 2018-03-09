#include "binary_trees.h"
/**
 * binary_tree_is_perfect - fxn checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: fxn returns 1 if perfect, 0 if NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count_left;
	int count_right;
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count_left = binary_tree_is_perfect(tree->left);
	count_right = binary_tree_is_perfect(tree->right);
	if (count_left - count_right == 0)
		return (1);
	else
		return (0);
}
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
