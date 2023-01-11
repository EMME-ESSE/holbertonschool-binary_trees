#include "binary_trees.h"

/**
 * binary_tree_node - binary_tree_node
 * @parent: parent
 * @value: value
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!value)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
