#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary solve function.
 * @tree: A pointer to string positiom accredited.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
