#include "binary_trees.h"

/**
 * binary_tree_depth- finds depth of tree from given tree node
 * @tree: tree to find the depth of
 *
 *
 * Return: 0 if fail or tree-parent is NULL or depth
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
