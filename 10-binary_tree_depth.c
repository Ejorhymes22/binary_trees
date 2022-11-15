#include "binary_trees.h"

/**
 * binary_tree_depth - measures thedepth of a node in a binary tree
 * @tree: pointer to the node to be measured
 *
 * Return: the depth
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
