#include <stdlib.h>
#include "binary_trees.h"

/**
 * maxValue - of the tree
 * @node: the node
 *
 * Return: max value
 */


int maxValue(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

int leftMax = maxValue(node->left);
int rightMax = maxValue(node->right);

int value = 0;
if (leftMax > rightMax)
{
value = leftMax;
}
else
{
value = rightMax;
}

if (value > node->n)
{
value = node->n;
}

return (value);
}

/**
 * minValue - of the tree
 * @node: the node
 *
 * Return: max value
 */

int minValue(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

int leftMax = minValue(node->left);
int rightMax = minValue(node->right);

int value = 0;
if (leftMax < rightMax)
{
value = leftMax;
}
else
{
value = rightMax;
}

if (value < node->n)
{
value = node->n;
}

return (value);
}

/**
 * rec_binary_tree_is_bst - rec checks for bst
 * @node: the main root
 * @tree: the tree
 *
 * Return: 0 or 1
 */

int rec_binary_tree_is_bst(const binary_tree_t *node,
		const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

/* false if the max of the left is > than us */
if (tree->left != NULL && maxValue(tree->left) > node->n)
return (0);

/* false if the min of the right is <= than us */
if (tree->right != NULL && minValue(tree->right) < node->n)
return (0);

/* false if, recursively, the left or right is not a BST*/
if (rec_binary_tree_is_bst(node, tree->left)
		&& rec_binary_tree_is_bst(node, tree->right))
return (0);

/* passing all that, it's a BST */
return (1);
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
	return (l);
}
