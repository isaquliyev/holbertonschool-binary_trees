#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
#include "10-binary_tree_depth.c"

/* Global variables */
size_t h = 0;
binary_tree_t *top;

/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (!tree->parent)
		top = (binary_tree_t *)tree;
	if (binary_tree_depth(tree) == h)
		func(tree->n);
	if (tree->left)
	{
		binary_tree_levelorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_levelorder(tree->right, func);
	}
	h++;
	binary_tree_levelorder(top, func);
}
