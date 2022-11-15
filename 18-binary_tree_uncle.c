#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to the find the uncle
 *
 * Return: NULL or pointer to the node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent) || !(node->parent->parent))
		return (NULL);
	if ((node->parent->parent->n) < node->n)
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		return (NULL);
	}
	else
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		return (NULL);
	}
}
