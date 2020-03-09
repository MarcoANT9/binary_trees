#include "binary_trees.h"

/**
 * binary_tree_height
 *
 * @tree: Root node in the tree to check.
 *
 *
 * Description - This program takes a tree by its root node and
 *               measures its heigth.
 *
 * Return: → The height of the tree (size_t)
 *         → 0 if the tree is NULL
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	return(right);
}
