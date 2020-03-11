#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree post-order.
 *
 * @tree: Root of the tree.
 * @func: Function to apply in each node.
 *
 * Description - This program traverses a binary tree using the post-order
 *               traversal method, this is, starting from the root to the
 *               leafs.
 *
 * Return: Nothing (Void).
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);

}
