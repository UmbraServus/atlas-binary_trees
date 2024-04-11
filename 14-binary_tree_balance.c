#include "binary_trees.h"

/**
 * binary_tree_balance- gives the balance factor of the tree at given node.
 * @tree: tree that the given node comes from
 *
 * Return: 0 if tree is null or balance factor L height - R height.
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;
	
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}


	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	return (left - right + 1);
}

