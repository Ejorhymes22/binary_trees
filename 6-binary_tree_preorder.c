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
	const binary_tree_t *dum;

	if (tree)
	{
		dum = tree;
		(*func)(dum->n);
		binary_tree_preorder(dum->left, &(*func));
		binary_tree_preorder(dum->right, &(*func));
	}
}
