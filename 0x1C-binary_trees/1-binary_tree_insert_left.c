#include "binary_trees.h"
/**
 * binary_tree_insert_left - function inserts node as left-child of another
 * @parent: pointer to the node to inser lef-child in
 * @value: value to store in the new node
 * Return: function returns pointer to new node or NULL if fxn fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
