#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree.
 *
 * @parent: Pointer to the parent node of the created one.
 * @value: Value to store inside the created node.
 *
 *
 * Description - This function takes two arguments; a pointer to a structure
 *               which will be the parent node of the created node, if the
 *               parent value is NULL, that means the created node will be the
 *               root, and thus the starting point of a new tree.
 *
 *
 * Return: → Address to the new node on success.
 *         → NULL on failure.
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);








}
