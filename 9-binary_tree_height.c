#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to the root node
 * Return: if tree is NULL return 0 else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0 , j = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		j = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((i > j) ? i : j);
	}
	return (0);
}
