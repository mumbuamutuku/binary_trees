#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: The node to find the sibling of
 *
 * Return: Either NULL or the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *fam = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	fam = node->parent;

	if (fam->left == node)
		fam = fam->right;
	else
		fam = fam->left;

	if (fam)
		return (fam);

	return (NULL);
}
