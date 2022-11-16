#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_rotate_right - performs a right rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *tmp1;

	tmp = tree->left;
	tmp1 = tree->left->right;
	tmp->parent = NULL;
	tree->parent = tmp;
	tree->left = tmp1;
	if (tmp1)
	{
		tmp1->parent = tree;
	}
	tmp->right = tree;
	return (tmp);
}
