#include <stdlib.h>
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

/**
 * rec_binary_tree_levelorder - recursively goes through tree levelorder
 * @tree: the pointer to root
 * @func: fucntion to perform
 * @h: the level
 *
 * Return: void
 */

void rec_binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int),
		size_t h)
{
	if (tree == NULL)
		return;
	if (h == 1)
	{
		(func)(tree->n);
	}
		
	else if (h > 1)
	{
		rec_binary_tree_levelorder(tree->left, func, h - 1);
		rec_binary_tree_levelorder(tree->right, func, h - 1);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-orde
 * @tree: pointer to the root node
 * @func: pointer to a funciton to callfor each node
 *
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i = 1, h;

	h = binary_tree_height(tree);

	h = h + h;
	for (; i <= h; i++)
		rec_binary_tree_levelorder(tree, func, i);
}
