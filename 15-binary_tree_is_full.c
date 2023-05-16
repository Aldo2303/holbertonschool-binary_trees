#include "binary_trees.h"
/**
 * binary_tree_is_full - check if the tree is a full tree.
 * @tree: the node to check.
 * Return: 1 in case of full tree or 0 if isn't a full tree or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int check1 = 0;
int check2 = 0;

if (tree == NULL)
{
return (0);
}
if (tree->left != NULL && tree->right != NULL)
{
check1 = binary_tree_is_full(tree->left);
check2 = binary_tree_is_full(tree->right);
}
if(tree->left != NULL && tree->right == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right != NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
if (check1 == 0 || check2 == 0)
{
return (0);
}
else
return (1);
}
