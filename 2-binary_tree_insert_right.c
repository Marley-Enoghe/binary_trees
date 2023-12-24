#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is used to inserts a node as the
 *					right-child of another node
 *
 * @parent: This is a pointer to the node to insert the right-child in
 * @value: This is the value to store in the new node
 *
 * Description: This is used if parent already has a right-child, the new node
 *				must take its place, and the old right-child must
 *				be set as the right-child of the new node.
 *
 * Return: This is a pointer to the created node, or
 *			NULL on failure or
 *			if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newly;

	if (!parent)
		return (NULL);

	newly = malloc(sizeof(binary_tree_t));
	if (!newly)
		return (NULL);

	newly->n = value;
	newly->parent = parent;
	newly->left = NULL;
	newly->right = parent->right;
	parent->right = newly;
	if (newly->right)
		newly->right->parent = newly;
	return (newly);
}
