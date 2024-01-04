#include "binary_trees.h"

/**
 * binary_tree_node - Creates new node for binary tree.
 *
 * @parent: Parent of the new node. If null new node
 * is the parent.
 * @value: Value of new node.
 *
 * Return: Pointer to the new node. On failure NULL.
 * Failure can be memory allocation fail.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	if (!parent)
		parent = new_node;
	else
		new_node->parent = parent;
	return (new_node);
}
