#include "binary_trees.h"

typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

int isBstUtil(const binary_tree_t *node, int min, int max)
{
	/* an empty tree is a BST */
	if (node == NULL)
		return (1);

	/* false if the node violates the min/max constraint */
	if (node->n < min || node->n > max)
		return (0);

	/* check subtrees under the constraints
	of min and max values for each node */
	return
		isBstUtil(node->left, min, node->n-1) &&  // Allow only distinct values
		isBstUtil(node->right, node->n+1, max);  // Allow only distinct values
}

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return(isBstUtil(tree, INT_MIN, INT_MAX));
}
