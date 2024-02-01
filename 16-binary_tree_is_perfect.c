#include "binary_trees.h"
/**
 * binary_tree_height - Gives the size of a (sub)tree
 *
 * @tree: SE
 * Return: New node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}


/**
 * binary_tree_is_perfect - Checks whether a tree is perfect
 *
 * @tree: SE
 * Return: 1 if true or 0 is false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if (height_left != height_right)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == 1 && right == 1)
		return (1);
	return (0);
}
