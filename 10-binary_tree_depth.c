#include "binary_trees.h"

/**
 * binary_tree_depth - This is a measures the depth of a node in a binary tree
 * @tree: This is a node to calculate the depth of
 *
 * Return: The depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deptth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		deptth++;
		tree = tree->parent;
	}

	return (deptth);
}
