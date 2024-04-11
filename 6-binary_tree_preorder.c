#include "binary_trees.h"

/**
 * binary_tree_preorder- traverse binary tree from left nodes to right nodes
 * @tree: tree to be traversed
 * @func used to print numbers of each node we visit
 *
 * Return: void
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
