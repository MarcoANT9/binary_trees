#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in-order.
 *
 * @tree: Root of the tree.
 * @func: Function to apply in each node.
 *
 * Description - This program traverses a binary tree using the in-order
 *               traversal method, this is, starting from the root to the
 *               leafs.
 *
 * Return: Nothing (Void).
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);

}
