#include "binary_trees.h"
/**
 * binary_tree_uncle - fxn finds uncle of a node
 * @node: pointer to the node to find the uncle of
 * Return: function returns a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	tmp = node->parent->parent;
	if (tmp->right == node->parent)
		return (tmp->left);
	else
		return (tmp->right);
	return (NULL);
}
