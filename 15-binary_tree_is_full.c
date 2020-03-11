#include "binary_trees.h"
/**
 * binary_tree_leaves_int - unction that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Description - This function counts all the leaves in a binary tree.
 *
 *Return: the number of leaves or 0 if is NULL
 */
int binary_tree_leaves_int(const binary_tree_t *tree)
{
	int leaves = 0;

	if (!tree)
		return (leaves);

	if (tree->left != NULL)
		leaves += binary_tree_leaves_int(tree->left);

	if (tree->right != NULL)
		leaves += binary_tree_leaves_int(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	return (leaves);
}
/**
 * binary_tree_nodes_int - function that counts the nodes with at least 1 child
 *                         in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Description - This function counts all the nodes in a binary tree.
 *
 *Return: The number of nodes with at least 1 child
 */
int binary_tree_nodes_int(const binary_tree_t *tree)
{
	int size = 1;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		size += binary_tree_nodes_int(tree->left);

	if (tree->right != NULL)
		size += binary_tree_nodes_int(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		size--;

	return (size);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Description - This function determines if the binary tree is full,
 *               it does it by counting the number of leaves and nodes
 *               if the number of nodes is less than the number of leaves,
 *               the tree is full, otherwise the number of leaves is equal
 *               to the number of nodes.
 *
 * Return: 0 if the tree is not full
 *        1 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes = 0, leaves = 0;

	leaves = binary_tree_leaves_int(tree);
	nodes = binary_tree_nodes_int(tree);
	if (nodes < leaves)
		return (1);

	return (0);
}
