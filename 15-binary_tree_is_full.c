#include "binary_trees.h"

/**
 *
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full;

	is_full = 0;

	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}

	is_full = binary_tree_is_full(tree->left);
	is_full = binary_tree_is_full(tree->right);

	return (is_full);
}