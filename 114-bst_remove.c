#include "binary_trees.h"

/**
 * successor - get the next successor i mean the min node in the right subtree
 * @node: tree to check
 * Return: the min value of this tree
 */
int successor(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = successor(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}

}
