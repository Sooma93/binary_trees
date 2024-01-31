#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of tree
 * @tree: pointerr to node
 * Return: if tree i NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
