#include "binary_trees.h"

/**
 * binary_tree_height_b - This is used to measures height of a binary tree for a bal tree
 * @tree: This is a tree to go through
 * Return: returns the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t t = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			t = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > t) ? l : t);
	}
}

/**
 * binary_tree_balance - This is used to measures balance factor of a binary tree
 * @tree: This is the tree to go through
 * Return: The balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
