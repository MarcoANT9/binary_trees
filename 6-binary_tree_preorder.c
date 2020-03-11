#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 *
 * @tree: Root of the tree.
 * @func: Function to apply in each node.
 *
 * Description - This program traverses a binary tree using the pre-order
 *               traversal method, this is, starting from the root to the
 *               leafs.
 *
 * Return: Nothing (Void).
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || *func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

}
