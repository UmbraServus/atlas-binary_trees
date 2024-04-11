#include "binary_trees.h"

/**
 * binary_tree_postorder- traverse the tree in post-order and print n of each.
 * @tree: tree to be traversed through
 * @func: func to be called on each node
 *
 *
 * Return: void
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
