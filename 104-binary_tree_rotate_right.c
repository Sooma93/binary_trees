#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate tree to right
 * @tree: pointer to the node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rot, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);
	rot = tree->left;
	tmp = rot->right;
	rot->right = tree;
	tree->left = tmp;
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
