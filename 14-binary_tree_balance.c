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
 * Return:  The height of the tree (int)
 *          0 if the tree is NULL
 *
 */
int binary_tree_height_int(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left += binary_tree_height_int(tree->left);

	if (tree->right != NULL)
		right += binary_tree_height_int(tree->right);

	if (left > right)
		return (left);
	return (right);
}
/**
 *binary_tree_balance - function that measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *
 *Return: the balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int fsize = 0, left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height_int(tree->left);
	right = binary_tree_height_int(tree->right);
	fsize = left - right;

	return (fsize);
}
