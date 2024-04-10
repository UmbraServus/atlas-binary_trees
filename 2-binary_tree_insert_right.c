#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a new node into the right side of parent
 * @parent: parent to be inserted into
 * @value: data to be added to the new node
 *
 * Return: NULL  on fail and new node on success
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_node == NULL)
	{
		if(parent == NULL)
		{
		free(new_node);
		}
		return (NULL);
	}

	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
