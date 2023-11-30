#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 idf perfect 0 if not or NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int treeDepth;

	if (tree == NULL)
	{
		return (0);
	}

	treeDepth = depth(tree);

	return (is_perfect_recursive(tree, treeDepth, 0));
}

/**
 * depth - measures the depth
 * @node: pointer to node
 * Return: the depth
*/
int depth(const binary_tree_t *node)
{
	int d;

	d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}

	return (d);
}

/**
 * is_perfect_recursive - logic impolementation for check
 * @node: node to check
 * @d: the depth
 * @level: level of node
 * Return: 1 or 0
*/
int is_perfect_recursive(const binary_tree_t *node, int d, int level)
{
	if (node == NULL)
	{
		return (1);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (d == level + 1);
	}

	if (node->left == NULL || node->right == NULL)
	{
		return (0);
	}

	return (is_perfect_recursive(node->left, d, level + 1)
	&& is_perfect_recursive(node->right, d, level + 1));
}

