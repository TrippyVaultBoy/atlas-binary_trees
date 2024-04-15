#include "binary_trees.h"

/**
 * binary_tree_depth- calculates the depth of a given node
 * @tree: pointer to given node
 *
 * Return: depth of given node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}

	return (depth);
}
