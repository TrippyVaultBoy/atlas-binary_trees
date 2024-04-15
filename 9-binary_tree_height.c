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

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		left++;
		return (left);
	}
	else if (right > left)
	{
		right++;
		return(right);
	}
	else
	{
		right++;
		return (right);
	}

	return (left);
}
