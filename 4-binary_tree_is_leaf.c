#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checksifnodeisaleaf
 * @node: the node
 *
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (0);
	if (!(node->right) && !(node->left))
		return (1);
	return (0);
}
