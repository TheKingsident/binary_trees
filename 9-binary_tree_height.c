#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: the height or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height;
	size_t right_height;

	left_height = right_height = 0;

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (tree->right != NULL)
	{
		right_height =  binary_tree_height(tree->right) + 1;
	}

	return (max(left_height, right_height));

}

/**
 * max - compares two values
 * @a: first value to compare
 * @b: second value to compare
 * Return: the max
*/
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

