#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_valid - check if the binary tree is valid
 * @tree: pointer to the node
 * @low: the value if lowest node
 * @high: the value of the highest node
 * Return: if tree is valid 1 other 0
 */
int is_bst_valid(const binary_tree_t *tree, int low, int high)
{
	if (tree == NULL)
	{
		if (tree->n < low || tree->n > high)
			return (0);
		return (is_bst_valid(tree->left, low, tree->n - 1) &&
			is_bst_valid(tree->right, tree->n + 1, high));
	}
	return (1);
}

/**
 * binary_tree_is_bst - check if tree valid
 * @tree: pointer to node
 * Return: 1 or 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_valid(tree, INT_MIN, INT_MAX));
}
