#include "binary_trees.h"

/**
 * binary_tree_height- calculates the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		left = 1 + binary_tree_height(tree->left);
		right = 1 + binary_tree_height(tree->right);

		if (right > left)
		{
			return (right);
		}
		else if (left > right)
		{
			return (left);
		}
		else if (right == left)
		{
			return (left);
		}
	}

	return (left);
}
