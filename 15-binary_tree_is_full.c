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
	if (2 * binary_tree_height(tree) + 1 == binary_tree_size(tree))
		return (1);
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree. If tree is NULL return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));
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
