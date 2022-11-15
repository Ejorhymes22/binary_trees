#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - deletes an entire binary tree
 * @tree: the root
 *
 * Return: 0 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
