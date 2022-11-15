#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checksifnodeisaleaf
 * @node: the node
 *
 * Returns 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right || node->left || !node)
		return (0);
	else if (!(node->right) && !(node->left))
		return (1);
	return (0);
}
