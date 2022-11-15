#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using pre-order traversal
 * @tree: the root
 * @func: the function to call
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *dum;

	if (tree)
	{
		dum = tree;
		binary_tree_postorder(dum->left, &(*func));
		binary_tree_postorder(dum->right, &(*func));
		(*func)(dum->n);
	}
}
