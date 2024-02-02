#include "binary_trees.h"

/**
 * complete - checks if tree is complete or not
 * @tree: a pointer to the root of the tree
 * @indx: indx for right and left child
 * @count: the size of the tree
 * Return: 1 if complete 0 if not
 */
int complete(const binary_tree_t *tree, int indx, int count)
{
if (tree == NULL)
return (1);
if (indx >= count)
return (0);
return (complete(tree->left, 2 * indx + 1, count) &&
complete(tree->right, 2 * indx + 2, count));
}
/**
 * binary_tree_is_complete - checks if tree is complete or not
 * @tree: a pointer to the root of the tree
 * Return: 1 if complete 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
int count = binary_tree_size(tree);
int indx = 0;

if (tree == NULL)
return (0);
return (complete(tree, indx, count));
}
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
