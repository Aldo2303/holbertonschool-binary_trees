#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of the node.
 * @node: is the node to find the uncle.
 * Return: NULL or uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *uncle;

if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}
if (node->parent->parent->right == node->parent)
{
if (node->parent->parent->left == NULL)
{
return (NULL);
}
else
uncle = node->parent->parent->left;
}
if (node->parent->parent->left == node->parent)
{
if (node->parent->parent->right == NULL)
{
return (NULL);
}
else
uncle = node->parent->parent->right;
}
return (uncle);
}
