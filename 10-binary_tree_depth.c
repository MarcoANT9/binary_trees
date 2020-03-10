#include "binary_trees.h"
/**
 *binary_tree_depth - function that measures the depth of a node in a binary
 *                    tree
 *@tree: pointer to the node to measure the depth
 *
 *Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (counter);

	while (1)
	{
		if (tree->parent == NULL)
		{
			return (counter);
		}
		else
		{
			counter++;
			tree = tree->parent;
		}
	}
}
