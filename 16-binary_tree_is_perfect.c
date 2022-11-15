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

	p = tree->left;
	q = tree->right;

	a = binary_tree_height(p);
	b = binary_tree_height(q);

	bf = a - b;
	return (bf);
}
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the pointer to the root node
 * 
 * Return: 0 ir 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
