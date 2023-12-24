#include "binary_trees.h"

/**
 * binary_tree_node - This is used to create a new binary tree node
 *
 * @parent: - This is a pointer to the parent node of the node to create
 * @value: - This is the value to put in the new node
 * Return: This a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* This is a declaration of the new node with its data type */
	binary_tree_t *newNode;

	/* This is used to allocate memory space for that node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the node */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* This is used return a pointer to the node */
	return (newNode);
}
