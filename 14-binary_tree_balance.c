#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_hight;

if (!tree)
	return (0);

left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
right_hight = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (left_height - right_hight);
}


/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to the root node
 * Return: if tree is NULL return 0 else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree != NULL)
	
	{
	size_t i = 0, j = 0;

	i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	j = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((i > j) ? i : j);
	}
	return (0);

}
