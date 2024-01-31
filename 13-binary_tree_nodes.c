#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child
 *@tree: the pointer to the tree
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t Nodes = 0;

	if (tree == NULL)
		return (0);

	Nodes += (tree->left || tree->right) ? 1 : 0;

	Nodes += binary_tree_nodes(tree->left);
	Nodes += binary_tree_nodes(tree->right);

	return (Nodes);


}
