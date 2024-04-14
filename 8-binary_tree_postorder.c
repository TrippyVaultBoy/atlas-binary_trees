#include "binary_trees.h"

/**
 * binary_tree_postorder- traverses a binary tree
 * @tree: pointer to the root node of the tree
 * @func: function to be called for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		printf("n=%d\n", tree->n);
	}
}
