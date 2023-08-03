#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf(no left or right child) .
 * @node: A pointer to the node to check.
 * Return: If the node is a leaf return 1 otherwise ret 0 or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1)

	return (0);
}
