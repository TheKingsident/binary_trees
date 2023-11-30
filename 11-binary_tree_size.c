#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size, 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSubSize;
	size_t rightSubSize;

	leftSubSize = 0;
	rightSubSize = 0;

	if (tree == NULL)
	{
		return (0);
	}

	leftSubSize = binary_tree_size(tree->left);
	rightSubSize = binary_tree_size(tree->right);

	return (leftSubSize + rightSubSize + 1);
}

