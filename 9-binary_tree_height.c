#include "binary_trees.h"
/**
 * binary_tree_height - it return the height of the tree.
 * @tree: is the root of the tree.
 * Return: count1 or count2.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count1 = 0;
	size_t count2 = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
	count1 = 1 + binary_tree_height(tree->left);
	count2 = 1 + binary_tree_height(tree->right);
	}
	if (count2 > count1)
	{
		return (count2);
	}
	else
	{
		return (count1);
	}
}