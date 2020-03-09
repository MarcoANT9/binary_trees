#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: Node to check
 *
 * Description - This program takes a node and determines if its a leaf or not
 *               in a binary tree, a leaf if defined as a node which has no
 *               children either to the left nor the right.
 *
 * Return: → 1 if the node is a leaf.
 *         → 0 if the node is not a leaf or is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);

}
