#include "binary_trees.h"
/**
 * binary_tree_sibiling - finds the sibiling of the node.
 * @node: the node of who we find the sibiling.
 * Return: NULL or the sibiling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *sibiling;

if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->right == node)
{
if (node->parent->left == NULL)
{
return (NULL);
}
else
sibiling = node->parent->left;
}
if (node->parent->left == node)
{
if (node->parent->right == NULL)
{
return (NULL);
}
else
sibiling = node->parent->right;
}
return (sibiling);
}
