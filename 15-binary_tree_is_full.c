#include "binary_trees.h"

/**
 * binary_tree_is_full- checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if full 0 if no or NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full;
	int left;
	int right;

	is_full = 0;
	left = 0;
	right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if ((tree->left == NULL && tree->right != NULL) ||
	(tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
	{
		is_full = 1;
	}

	return (is_full);
}
