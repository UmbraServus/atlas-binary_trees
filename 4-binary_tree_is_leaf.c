#include "binary_trees.h"

/**
 * binary_tree_is_leaf- checks to see if the node is a leaf
 * @node: node to be checked
 *
 * Return: 0 if not a leaf or fail and 1 if is leaf
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	else if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}

	return (0);
}
