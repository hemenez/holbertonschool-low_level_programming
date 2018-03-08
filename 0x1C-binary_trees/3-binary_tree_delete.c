#include "binary_trees.h"
/**
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: pointer to root node of tree to delete
 * Return: function is void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
