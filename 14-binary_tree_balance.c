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
	size_t left, right;
	int balance;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	balance = left - right;

	return (balance);
}

/**
 * binary_tree_height- gets the height of the tree
 * @tree: tree to find the height of
 *
 * Return: height of tree or 0 if no tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}

	else
	{
			return (right_height + 1);
	}
}
