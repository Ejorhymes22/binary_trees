#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the rightchild
 * @value: of the new node
 *
 * Return: pointer created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
	{
		free(new);
		return (NULL);
	}

	new->right = NULL;
	new->left = NULL;
	new->n = value;
	new->parent = parent;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
