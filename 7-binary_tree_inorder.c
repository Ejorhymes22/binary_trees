#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: the root
 * @func: the function to call
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *dum;

	if (tree)
	{
		dum = tree;
		binary_tree_inorder(dum->left, &(*func));
		(*func)(tree->n);
		binary_tree_inorder(dum->right, &(*func));
	}
}
