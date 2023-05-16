#include "binary_trees.h"
/**
 * binary_tree_size - returns the size of the tree.
 * @tree: it points a node of the tree.
 * Return: 0 in case of NULL or count1 + count2.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t count1 = 0;
    size_t count2 = 0;
    
    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left != NULL || tree->right != NULL)
    {
        count1 = binary_tree_size(tree->left);
        count2 = binary_tree_size(tree->right);
    }
    return (count1 + count2 + 1);
}