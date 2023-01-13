#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	 size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
/**
 * Forma abreviada de escribir un if-else que compara las alturas izquierda y
 * derecha y devuelve el valor más alto.
 * El símbolo "?" es la condición (si left_height es mayor que right_height)
 * El símbolo ":" representa el Else (right_height mayor que left_height)
 * se añade "1" para contar la raíz del árbol en el total.
**/
	return ((left_height > right_height ? left_height : right_height) + 1);
}
