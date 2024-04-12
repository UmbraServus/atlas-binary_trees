#include "binary_trees.h"

/**
 *
 *
 *
 *
 *
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int L, R;

	if (tree == NULL)
	{
		return (0);
	}

	L = binary_tree_is_full(tree->left);
	R = binary_tree_is_full(tree->right);

	if (L != NULL || R != NULL)
	{
		return (0);
	}
       
	if (tree->left != NULL && tree->right != NULL)
	{
		return (1);
	}
	
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
}
