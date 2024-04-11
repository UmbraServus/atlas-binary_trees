#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the leaves in a tree from a given node
 * @tree: the node given to count the leaves of.
 *
 *
 * Return: 0 if tree is NULL or number of leaves. 
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
	{
		return (0);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (left_leaves + right_leaves + 1);
	}

	return (left_leaves + right_leaves);
}
