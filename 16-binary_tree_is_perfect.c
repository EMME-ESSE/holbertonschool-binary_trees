#include "binary_trees.h"

/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: tree
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

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

