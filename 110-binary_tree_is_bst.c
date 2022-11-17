#include <stdlib.h>
#include "binary_trees.h"

/**
 * rec_binary_tree_levelorder - recursively goes through tree levelorder
 * @tree: the pointer to root
 * @func: fucntion to perform
 * @h: the level
 *
 * Return: void
 */
/*
int rec_binary_tree_is_bst(const binary_tree_t *node, const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree && node != tree)
	{
		if (node->n < tree->n)
			return (0);
	}
	else if (node != tree && node->n > tree->n)
		return (0);

	return (rec_binary_tree_is_bst(node, tree->left) && rec_binary_tree_is_bst(node, tree->right));
}
*/


int maxValue(const binary_tree_t *node)
{
    if (node == NULL) {
        return 0;
    }

    int leftMax = maxValue(node->left);
    int rightMax = maxValue(node->right);

    int value = 0;
    if (leftMax > rightMax) {
        value = leftMax;
    }
    else {
        value = rightMax;
    }

    if (value > node->n) {
        value = node->n;
    }

    return value;
}

int minValue(const binary_tree_t *node)
{
    if (node == NULL) {
        return 1000000000;
    }

    int leftMax = minValue(node->left);
    int rightMax = minValue(node->right);

    int value = 0;
    if (leftMax < rightMax) {
        value = leftMax;
    }
    else {
        value = rightMax;
    }

    if (value < node->n) {
        value = node->n;
    }

    return value;
}

/* Returns true if a binary tree is a binary search tree */
int rec_binary_tree_is_bst(const binary_tree_t *node, const binary_tree_t *tree)
{
    if (tree == NULL)
        return 1;

    /* false if the max of the left is > than us */
    if (tree->left != NULL
        && maxValue(tree->left) > node->n)
        return 0;

    /* false if the min of the right is <= than us */
    if (tree->right != NULL
        && minValue(tree->right) < node->n)
        return 0;

    /* false if, recursively, the left or right is not a BST
     */
    if (rec_binary_tree_is_bst(node, tree->left) && rec_binary_tree_is_bst(node, tree->right))
        return 0;

    /* passing all that, it's a BST */
    return 1;
}


/**
 * binary_tree_is_bst - checks if a binary tree is valid BST
 * @tree: pointer to the root nod of the tree
 *
 * Return: 0 or 1
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	const binary_tree_t *node;
	int l;

	node = tree;
	if (node == NULL)
		return (0);
	l = rec_binary_tree_is_bst(node, tree);
/*	binary_tree_is_bst(node->left);
	binary_tree_is_bst(node->right);
*/	
	return (l);
}
