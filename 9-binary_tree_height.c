#include "binary_trees.h"

/**
 *
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	left = 0;
	right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (right > left)
		{
			return (right + 1);
		}
		else if (left > right)
		{
			return (left + 1);
		}
		else if (right == left)
		{
			return (left + 1);
		}
	}

	return (NULL);
}