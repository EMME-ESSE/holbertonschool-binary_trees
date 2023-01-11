#include "binary_trees.h"
/**
* func -  value to pass as a parameter to the function
* @n: the number to pass
**/

void func(int n);

/**
* binary_tree_preorder - function that pre-order in traversal way a binary tree
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
**/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	/* Call the function for the current node */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
