#include "binary_trees.h"

/**
 * check_sub_tree_Left - check if all nodes are smaller than
 * the root specified
 * @node: node in the tree to verify condition
 * @max: value to compare
 * Return: 1 if all nodes are smaller or equal or 0 if not
 */

int check_sub_tree_Left(const binary_tree_t *node, int max)
{
	int left = 0, right = 0;

	if (node == NULL)
	{
		return (1);
	}
	else
	{
		if (node->n >= max)
			return (0);
		left = check_sub_tree_Left(node->left, max);
		right = check_sub_tree_Left(node->right, max);
		if (left == right && left == 1)
			return (1);
		return (0);
	}
}

/**
 * check_sub_tree_Right - check if all the nodes are bigger than the
 * root specified
 * @node: node in the tree to verify condition
 * @min: value to compare
 * Return: 1 if all is bigger or equal or 0 if not
 */

int check_sub_tree_Right(const binary_tree_t *node, int min)
{
	int left = 0, right = 0;

	if (node == NULL)
	{
		return (1);
	}
	else
	{
		if (node->n >= min)
			return (0);
		left = check_sub_tree_Right(node->left, min);
		right = check_sub_tree_Right(node->right, min);
		if (left == right && left == 1)
			return (1);
		return (0);
	}
}
