#include "binary_tree.h"
/**
 * binary_tree_is_leaf - check if the node is a leaf or not.
 * @node: is a pointer of the node to check.
 * Return: 1 (if node is a leaf) or 0 (if node isn't a leaf or is NULL).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
    {
    return (0);
    }
    if (node->left == NULL && node->right == NULL)
    {
        return (1);
    }
    else
    {
        return(0);
    }
}