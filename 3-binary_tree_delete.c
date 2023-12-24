#include "binary_trees.h"

/**
 * binary_tree_delete - This is used to delete an entire binary tree
 * @tree: This is a pointer to the root node of the tree to delete
 * Description: If tree is NULL, nothing should be done
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
