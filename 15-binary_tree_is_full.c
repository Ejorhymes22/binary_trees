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
	int l, m;
	if (!tree)
		return (0);
	if ((tree->right && !(tree->left)) || (tree->left && !(tree->right)))
		return (0);
	if (tree->right && tree->left)
	{
		l = binary_tree_is_full(tree->left);
		m = binary_tree_is_full(tree->right);
		if (l + m > 0)
			return (0);
		return (1);
	}
	if (tree && !(tree->right) && !(tree->left) && !(tree->parent))
		return (1);
	return (0);
}
