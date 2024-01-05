#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: if node is full 1, otherwise 0.
 * If tree is NULL, return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (2 * binary_tree_leaves(tree) - 1 == binary_tree_size(tree))
		return (1);
	return (0);
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
