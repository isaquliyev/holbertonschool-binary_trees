#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert new node at the right end of parent.
 *
 * @parent: Pointer to parent node.
 * @value: Value of new node.
 *
 * Return: Pointer to parent node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	else
		new_node->right = NULL;
	parent->right = new_node;
	return (new_node);
}
