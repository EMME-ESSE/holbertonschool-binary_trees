#include "binary_trees.h"
/**
 * sibling - binary_tree_sibling
 * @node: node
 * Return: pointer to sibling
 */

binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}

/**
 * binary_tree_uncle - binary_tree_uncle
 * @node: node
 * Return: Pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (sibling(node->parent));
}
