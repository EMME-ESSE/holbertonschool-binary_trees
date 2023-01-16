#include "binary_trees.h"

/**
 * height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree
**/
size_t height(const binary_tree_t *tree)
{
	 size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (!tree)
		return (0);

	if (left_height != right_height)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}

