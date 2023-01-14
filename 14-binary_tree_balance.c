#include "binary_trees.h"

/**
 * binary_tree_size - function that  measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	
	if (!tree)
		return (-1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}
