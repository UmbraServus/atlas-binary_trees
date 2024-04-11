#include "binary_trees.h"

/**
 * binary_tree_nodes- counts nodes in the tree as long as there is one child
 * @tree: tree to be counted through
 *
 *
 * Return: 0 if NULL or no nodes or number of nodes in tree
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	}

	else
	{
		return (0);
	}
}
