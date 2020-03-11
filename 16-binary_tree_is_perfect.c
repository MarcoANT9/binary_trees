#include "binary_trees.h"

/**
 *binary_tree_leaves_int - unction that counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
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
 * binary_tree_height_int - Gets the height of a binary tree.
 *
 * @tree: Root node in the tree to check.
 *
 *
 * Description - This program takes a tree by its root node and
 *               measures its heigth.
 *
 * Return: → The height of the tree (int)
 *         → 0 if the tree is NULL
 *
 */
int binary_tree_height_int(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height_int(tree->left) + 1;

	if (tree->right != NULL)
		right = binary_tree_height_int(tree->right) + 1;

	if (left > right)
		return (left);
	return (right);
}

/**
 * two_powa - Amplifies two to a determined power.
 *
 * @powa: Power to amplify two.
 *
 * Return: The power of two (int).
 *
 */
int two_powa(int powa)
{
	int two_power = 1;

	while (powa > 0)
	{
		two_power *= 2;
		powa -= 1;
	}
	return (two_power);
}

/**
 *binary_tree_is_perfect - function that checks if a binary tree is full
 *@tree: pointer to the root node of the tree to check
 *
 *Return: 0 if the tree is not full
 *        1 if the tree is full
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, leaves = 0, two_power;

	leaves = binary_tree_leaves_int(tree);
	height = binary_tree_height_int(tree);
	two_power = two_powa(height);
	if (two_power != leaves)
		return (0);
	return (1);
}
