#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: Address of the root of the tree.
 *
 * Description: This program takes the first node of a binary tree
 *              and deletes the whole structure, including all
 *              branches and leafs.
 *
 * Return: Nothing (Void).
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
