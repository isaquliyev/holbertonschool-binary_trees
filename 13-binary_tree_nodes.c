#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of nodes with at least 1 child.
 * If tree is NULL, function returns 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
