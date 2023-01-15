#include "binary_trees.h"
/**
 * binary_tree_postorder - through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function for each node
 * Return: The nodes
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
