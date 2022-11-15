#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node pointer
 *
 * Return: pointer to the sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->n < node->parent->n)
	{
		if (node->parent->right)
			return (node->parent->right);
		return (NULL);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
		return (NULL);
	}
}
