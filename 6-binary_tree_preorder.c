#include "binary_trees.h"

/**
 * binary_tree_preorder- traverses a binary tree
 * @tree: the root node of the tree
 * @func: function to be called for each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		printf("n=%d\n", tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
