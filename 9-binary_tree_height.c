#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height of Tree
 * If tree is NULL return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t ldepth, rdepth;

        if (tree == NULL)
            return (0);
        else
        {
            ldepth = binary_tree_height(tree->left);
            rdepth = binary_tree_height(tree->right);

            if (ldepth > rdepth)
                return (ldepth + 1);
            else     
                return (rdepth + 1);
        }
}