#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node to the left of the selected
 *                           node
 *
 * @parent: Address of the parent node to add the node.
 * @value: Value to insert into the new node.
 *
 * Description: This program takes a node from a binary tree and adds a new
 *              left node to it with its respective value; if the current node
 *              has already a left child, it will be replaced by the new one
 *              and assigned as its child node.
 *
 *
 * Return: → Pointer to the created Node on success.
 *         → NULL on failure or if parent is NULL.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}

	return (new_node);
}
