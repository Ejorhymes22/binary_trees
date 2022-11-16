#include <stdlib.h>
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

	if (!tree)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowesst common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: NULL or pointer to ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	size_t f, s;

	f = binary_tree_depth(first);
	s = binary_tree_depth(second);

	while (f > s)
	{
		first = first->parent;
		f--;
	}
	while (s > f)
	{
		second = second->parent;
		s--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)(first));
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
