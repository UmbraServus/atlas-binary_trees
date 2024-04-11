#include "binary_trees.h"

/**
 * binary_tree_height- gets the height of the tree
 * @tree: tree to find the height of
 *
 * Return: height of tree or 0 if no tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL || tree->parent == NULL)
	{
		return(0);
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
