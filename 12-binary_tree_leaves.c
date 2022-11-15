#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the count of a binary leaves
 * @tree: the pointer to the root node to measure
 *
 * Return: the size or0
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!(tree->left) && !(tree->right))
			return (1);
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (0);
}
