#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks node is leaf or not.
 *
 * @node: Pointer to a node check.
 *
 * Return: If node is leaf 1, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
