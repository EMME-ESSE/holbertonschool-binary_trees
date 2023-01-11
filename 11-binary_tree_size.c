#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: return the size of the tree
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	/* Compute the size of the left and right subtrees */
		size_t left_size = binary_tree_size(tree->left);
		size_t right_size = binary_tree_size(tree->right);
/* (1 for the current node + size of subtrees)*/
	return (1 + left_size + right_size);
	}
}
