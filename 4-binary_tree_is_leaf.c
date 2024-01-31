#include "binary_trees.h"

/**
 * binary_tree_is_leaf - cheack if the node is leaf
 * @node: pointer to node
 * Return: if its leaf 1 other 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
