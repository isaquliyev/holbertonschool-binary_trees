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

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of leaves, if tree is NULL returns 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Size of tree, if tree NULL returns 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
