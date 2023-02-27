#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: A pointer ro the root node of the tree to delete.
 */
binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}
 