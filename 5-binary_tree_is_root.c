#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a root or not.
 * @node: is a pointer to a node.
 * Return: 1 (if is the root) or 0 (if isn't the root or NULL).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
