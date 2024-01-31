#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: A pointer to the root node of the tree to measure the size of.
*
* Return: The size of the tree (number of nodes).
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

size_t left;
size_t right;

if (tree == NULL)
	return (0);

left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);

	return (right + 1 + left);
}
