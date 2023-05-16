#include "binary_trees.h"
/**
 * binary_tree_depth - return the depth of the node.
 * @tree: points to a node of the tree.
 * Return: 0 in case of NULL or count.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
{
return (0);
}
if (tree->parent != NULL)
{
count = 1 + binary_tree_depth(tree->parent);
}
return (count);
}
