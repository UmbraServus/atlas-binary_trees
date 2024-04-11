#include "binary_trees.h"

/**
 * binary_tree_size- size of the tree from given node
 * @tree: given node of a tree to find the size
 *
 * Return: number of nodes or size in the tree
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
	{
		return (0);
	}


	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size + 1);
}
