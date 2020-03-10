#include "binary_trees.h"
/**
 *binary_tree_leaves - unction that counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *
 *Return: the number of leaves or 0 if is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (leaves);

	if (tree->left != NULL)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		leaves += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	return (leaves);
}
