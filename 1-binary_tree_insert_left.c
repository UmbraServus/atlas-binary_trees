#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a tree node on the left side of the parent
 * @parent: parent node to have new node inserted on left
 * @value: value in new node
 *
 * Return: NULL on fail and new node on success.
 *
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_node == NULL)
	{
		return (NULL)
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
