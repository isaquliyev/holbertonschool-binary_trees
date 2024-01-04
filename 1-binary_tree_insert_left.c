#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert new node at the left end of parent.
 *
 * @parent: Pointer to parent node.
 * @value: Value of new node.
 *
 * Return: Pointer to parent node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp = parent;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	else
		new_node->left = NULL;
	parent->left = new_node;
	return (new_node);
}
