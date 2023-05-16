#include "binary_trees.h"
/**
 * countleft - it counts all the left way of the node.
 * @tree: is the node to check
 * Return: count.
 */
int countleft(const binary_tree_t *tree)
{
int count = 0;

if (tree->left != NULL && tree->right != NULL)
{
count += 1; 
countleft(tree->left);
count += 1;
countleft(tree->right);
}
if (tree->left != NULL && tree->right == NULL)
{
count += 1;
countleft(tree->left);
}
if (tree->left == NULL && tree->right != NULL)
{
count += 1;
countleft(tree->right);
}
return (count + 1);
}

/**
 * countright - it counts all the way right of the node.
 * @tree: is the node to check.
 * Return: count.
 */
int countright(const binary_tree_t *tree)
{
int count = 0;

if (tree->left != NULL && tree->right != NULL)
{
count += 1;
countright(tree->left);
count += 1;
countright(tree->right);
}
if (tree->left != NULL && tree->right == NULL)
{
count += 1;
countright(tree->left);
}
if (tree->left == NULL && tree->right != NULL)
{
count = 1;
countright(tree->right);
}
return (count + 1);
}

/**
 * binary_tree_is_perfect - this function checks if the tree is perfect or not.
 * @tree: is the node to check and the base of the others nodes to check.
 * Return: 1 if is perfect and 0 is not or tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int count1 = 0;
int count2 = 0;

if (tree == NULL)
{
return (0);
}
count1 += countleft(tree->left);
count2 += countright(tree->right);
if (count1 == 0 && count2 == 0)
{
return (0);
}
if (count1 != count2)
{
return (0);
}
else
{
return (1);
}
}
