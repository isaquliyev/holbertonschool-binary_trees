#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_levelorder - Goes through a binary tree using
 * level-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;

	if (!tree || !func)
		return;
	if (!tree->parent)
		func(tree->n);
	else if (tree == tree->parent->left)
	{
		func(tree->n);
		temp = binary_tree_sibling((binary_tree_t *)tree);
		func(temp->n);
	}
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
