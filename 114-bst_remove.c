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

/**
 * two_children - function that gets the next successor using the min
 * value in the right subtree, and then replace the node value for
 * this successor
 * @root: node tat has two children
 * Return: the value found
 */

int two_children(bst_t *root)
{
	int new_value = 0;

	new_value = successor(root->right);
	root->n = new_value;
	return (new_value);
}
