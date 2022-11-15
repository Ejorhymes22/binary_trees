#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the count of a binary leaves
 * @tree: the pointer to the root node to measure
 *
 * Return: the size or0
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!(tree->left) && !(tree->right))
			return (0);
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
