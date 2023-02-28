#include "binary_trees.h"
/**
 *  -a function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of leaves
 * Return: count of the leaves
 * if tree is NULL Return 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if(!tree)
        return (0);
    if(tree->left == NULL && tree->right == NULL)
        return (1);
    else
        return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}