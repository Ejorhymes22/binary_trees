#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_node - creates abinary tree node
 * @parent: the parent node
 * @value: its value
 *
 * Return: pointer to the new node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;


	if (parent)
	{
		if (parent->n > value)
			parent->left = new;
		else
			parent->right = new;
	}
	return (new);
}
