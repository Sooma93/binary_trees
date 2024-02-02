#include "binary_trees.h"

/**
 * create_tree - creates an AVL tree with recursion
 *
 * @node: pointer node
 * @array: input array of integers
 * @size: size of array
 * @mode: 1 to adding on the left, 2 to adding on the right
 * Return: no return
 */
void create_tree(avl_t **node, int *array, size_t size, int mode)
{
	size_t temp;

	if (size == 0)
		return;

	temp = (size / 2);
	temp = (size % 2 == 0) ? temp - 1 : temp;

	if (mode == 1)
	{
		(*node)->left = binary_tree_node(*node, array[temp]);
		create_tree(&((*node)->left), array, temp, 1);
		create_tree(&((*node)->left), array + temp + 1, (size - 1 - temp), 2);
	}
	else
	{
		(*node)->right = binary_tree_node(*node, array[temp]);
		create_tree(&((*node)->right), array, temp, 1);
		create_tree(&((*node)->right), array + temp + 1, (size - 1 - temp), 2);
	}
}

/**
 * sorted_array_to_avl - creates root node and calls to create_tree
 *
 * @array: input array of integers
 * @size: size of array
 * Return: pointer to the root
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;
	size_t temp;

	root = NULL;

	if (size == 0)
		return (NULL);

	temp = (size / 2);

	temp = (size % 2 == 0) ? temp - 1 : temp;

	root = binary_tree_node(root, array[temp]);

	create_tree(&root, array, temp, 1);
	create_tree(&root, array + temp + 1, (size - 1 - temp), 2);

	return (root);
}
