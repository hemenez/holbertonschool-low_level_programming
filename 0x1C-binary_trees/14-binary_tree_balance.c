#include "binary_trees.h"
/**
 * helper_function - function aids height calculator by using recursive calls
 * @tree: pointer to node for height to be calculated
 * Return: function returns height of tree + 1
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
 * binary_tree_height - function calculates height of binary tree
 * @tree: pointer to tree for height to be calculated
 * Return: function returns true height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = helper_function(tree);
	return (height - 1);
}
/**
 * binary_tree_balance - fxn measures balance factor of binary tree
 * @tree: pointer to root node of tree to measure balance factor
 * Return: function returns 0 if tree is NULL, otherwise returns balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	int balance;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	balance = left_height - right_height;
	return (balance);
}
