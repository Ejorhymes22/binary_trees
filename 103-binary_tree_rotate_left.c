#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *tmp1;

	tmp = tree->right;
	tmp1 = tree->right->left;
	tmp->parent = NULL;
	tree->parent = tmp;
	tree->right = tmp1;
	if (tmp1)
	{
		tmp1->parent = tree;
	}
	tmp->left = tree;
	return (tmp);
}
