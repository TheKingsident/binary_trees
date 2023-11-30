#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node. NULL if node or parent is NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling_check(node->parent));
}

/**
 * binary_tree_sibling_check - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL if node or parent is NULL
*/
binary_tree_t *binary_tree_sibling_check(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

