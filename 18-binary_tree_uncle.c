#include "binary_trees.h"
/**
 *binary_tree_uncle - function that finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *
 *Return: the uncle node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	uncle = node->parent->parent;
	if (uncle->left == node->parent)
		return (uncle->right);
	return (uncle->left);
}
