#include "binary_trees.h"
/**
 *binary_tree_is_root - function that checks if a given node is a root:
 *@node: pointer of the tree
 *
 *Return: 1 if node is the root
          0 if node is not the root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);


	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
