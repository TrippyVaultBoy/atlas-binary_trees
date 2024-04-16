#include "binary_trees.h"

/**
 *
*/

int binary_tree_balance_height(const binary_tree_t *tree)
{
	int hleft;
	int hright;

	hleft = 0;
	hright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		hleft = binary_tree_balance_height(tree->left);
		hright = binary_tree_balance_height(tree->right);

		if (hleft > hright)
		{
			return (1 + hleft);
		}
		else if (hright > hleft)
		{
			return (1 + hright);
		}
		else if (hright == hleft)
		{
			return (hright + 1);
		}
	}

	return (0);
}

/**
 *
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_balance_height(tree->left) - 
	binary_tree_balance_height(tree->right));
}
