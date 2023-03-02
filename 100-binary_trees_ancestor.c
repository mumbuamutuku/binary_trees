#include "binary_trees.h"

size_t depth(const binary_tree_t *tree);

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: a pointer to the lowest common ancestor node of the two given nodes
* If no common ancestor was found, your function must return NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t fdepth, sdepth;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);

	for (fdepth = depth(first); fdepth > 1; fdepth--)
		first = first->parent;
	for (sdepth = depth(second); sdepth > 1; sdepth--)
		second = second->parent;

	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	else
		return (NULL);
}

/**
 * depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t depth(const binary_tree_t *tree)
{
	return ((tree->parent != NULL) ? 1 + depth(tree->parent) : 0);
	}
