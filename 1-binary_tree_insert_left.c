#include "binary_trees.h"

/**
 * binary_tree_insert_left -  This is used to inserts a node as the left-child of another node
 *
 * @parent: This is a pointer to the node to insert the left-child in
 * @value:  This is the value to store in the new node
 *
 * Description - This is used if the parent already has a left-child, the new node must
 *		take its place, and the old left-child must be set as
 *				the left-child of the new node.
 *
 * Return: This is a pointer to the created node, or NULL on failure or if
 *			parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newly;

	if (!parent)
		return (NULL);

	newly = malloc(sizeof(binary_tree_t));
	if (!newly)
		return (NULL);

	newly->n = value;
	newly->parent = parent;
	newly->right = NULL;
	newly->left = parent->left;
	parent->left = newly;
	if (newly->left)
		newly->left->parent = newly;
	return (newly);
}
