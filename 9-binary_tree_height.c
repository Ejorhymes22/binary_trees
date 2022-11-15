#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node
 *
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, m = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left || tree->right)
	{
		l = binary_tree_height(tree->left);
		m = binary_tree_height(tree->right);
		if (l > m)
			return (l + 1);
		else
			return (m + 1);
	}
	return (0);
}
