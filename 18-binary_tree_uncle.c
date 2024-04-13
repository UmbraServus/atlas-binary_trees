#include "binary_trees.h"

/**
 * binary_tree_sibling- checks for a sibling of the current node
 * @node: current node
 *
 *
 * Return: NULL if no sibling, current node is NULL or is root
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node && node->parent->right != NULL)
	{
		return (node->parent->right);
	}

	if (node->parent->right == node && node->parent->left != NULL)
	{
		return (node->parent->left);
	}

	return (NULL);
}

/**
 * binary_tree_uncle- checks if node has an uncle
 * @node: node to be chcked
 *
 *
 *
 * Return: NULL or the node that is the uncle
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}
