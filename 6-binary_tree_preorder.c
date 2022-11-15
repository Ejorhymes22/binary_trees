#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: the root
 * @func: the function to call
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((func) == NULL)
		return;
	if (tree)
	{
		(func)(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, (func));
		if (tree->right)
			binary_tree_preorder(tree->right, (func));
	}
}
