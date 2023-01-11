#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_node
 * @parent: parent
 * @value: value
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (!newnode)
		return (NULL);

	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);
}
