#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Makes a node node
 * @parent: parent
 * @value: value
 * Return: The new node or Null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (0);

	node->n = value;
	node->left = 0;
	node->right = 0;
	node->parent = 0;

	if (parent)
		node->parent = parent;

	return (node);
}
