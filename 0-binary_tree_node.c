#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * 
 * @parent: pointer to the node it will fall under
 * @value: the value to be assigned to the new node
 * Return: Address of the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

