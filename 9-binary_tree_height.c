#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height of Tree
 * If tree is NULL return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ldepth = 0, rdepth = 0;

	if (!tree)
		return (0);

	ldepth = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rdepth = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((ldepth > rdepth) ? ldepth : rdepth);
}
