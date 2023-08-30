#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_depth - depth of specified node from root
 * @tree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
