#include "binary_trees.h"

/**
 * binary_tree_postorder - This goes through a binary tree using post-order traverse
 * @tree: This is the tree to traverse
 * @func: This is the pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
