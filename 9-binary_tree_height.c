#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: plus the height of the tree.
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
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
=======
 * binary_tree_height - binary_tree_height
 * @tree: tree
 * Return: aaa
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
>>>>>>> 83d408e84b72ee6e8deb7806f718c7cbd7adb1d3
}
