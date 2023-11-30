#include "binary_trees.h"
/**
 * binary_tree_balance - calculates the balance factor of a tree
 * @tree: pointer to the root node of the tree
 * Return: the balance factor, 0 if NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height - right_height);
}

/**
 * height - calculates the height of a subtree
 * @node: pointer to node
 * Return: the height of the subtree
*/
int height(const binary_tree_t *node)
{
	int left_height;
	int right_height;

	if (node == NULL)
	{
		return (-1);
	}

	left_height = height(node->left);
	right_height = height(node->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

