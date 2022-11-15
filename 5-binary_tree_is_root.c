#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node
 *
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent || !node)
		return (0);
	return (1);
}
