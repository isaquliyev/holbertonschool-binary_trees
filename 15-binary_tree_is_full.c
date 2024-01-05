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
	if (!tree || !(tree->left && tree->right && tree->parent))
		return (0);
	return (1);
}
