#include "binary_trees.h"
#include <stdio.h>


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
	else if (tree)
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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the pointer to the root nodeof the tree
 *
 * Return: the balance factore
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *p, *q;
	int a, b, bf;

	if (tree == NULL)
		return (0);
	p = tree->left;
	q = tree->right;

	a = binary_tree_height(p);
	b = binary_tree_height(q);

	bf = a - b;
	return (bf);
}
