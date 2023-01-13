#include "binary_trees.h"
/**
 * binary_tree_depth - Find out the depth of a binary tree
 *
 * @tree: Pointer to the first node on the tree
 *
 * Return: 0 on error, tree depth otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
