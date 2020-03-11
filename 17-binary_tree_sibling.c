#include "binary_trees.h"

/**
 * binary_tree_sibling - Shows the sibling of a node.
 *
 * @node: Node to determine the sibling.
 *
 * Description - This program takes a node and returns its sibling,
 *               that is, the node with the same parent. If the node
 *               has no sibling, it will return NULL.
 *
 * Return: → Address of the sibling node on success (binary_tree_t *).
 *         → NULL if the node has no sibling.
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	tmp = node->parent;

	if (tmp->left == node)
		return (tmp->right);

	return (tmp->left);
}
