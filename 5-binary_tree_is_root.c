#include "binary_trees.h"

/**
 * binary_tree_is_root- checks to see if node is root of tree
 * @node: node to be checked.
 *
 * Return: 0 if not root or NULL 1 if root
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
