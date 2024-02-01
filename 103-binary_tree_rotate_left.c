#include "binary_trees.h"

/**
 * binary_tree_rotate_left - to rotate binary tree left
 * @tree: pointer to the node
 * Return: pointer to node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rot, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);
	rot = tree->right;
	tmp = rot->left;
	rot->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = rot;
	rot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = rot;
		else
			tmp->right = rot;
	}
	return (rot);
}
