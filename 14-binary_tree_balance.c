#include "binary_trees.h"

/**
 * binary_tree_balance_height- calculates the height of a binary tree
 * @tree: pointer tot he root node of the tree
 *
 * Return: height of tree
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
 * binary_tree_balance- calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor
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
