#include "binary_trees.h"
/**
 * binary_tree_sibling - fxn finds the sibling of a node
 * @node: a pointer to the node to find the sibling of
 * Return: fxn returns pointer to the sibling node, or NULL if error
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	tmp = node->parent;
	if (tmp->left == NULL || tmp->right == NULL)
		return (NULL);
	if (tmp->left == node)
		return (tmp->right);
	else
		return (tmp->left);
	return (NULL);
}
