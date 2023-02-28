#include "binary_trees.h"
#include <stdbool.h>

// Calculate the depth
int depth(const binary_tree_t *node) 
{
    int d = 0;
    while (node != NULL) 
    {
        d++;
        node = node->left;
    }
    return d;
}

// Check if the tree is perfect
bool is_perfect(const binary_tree_t *root, int d, int level) 
{
    // Check if the tree is empty
  if (root == NULL)
        return (0);

  // Check the presence of children
  if (root->left == NULL && root->right == NULL)
        return (d == level + 1);

  if (root->left == NULL || root->right == NULL)
        return (0);

  return (is_perfect(root->left, d, level + 1) &&
       is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if perfect else 0
 * If tree is NULL return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int d = depth(tree);

    return (is_perfect(tree, d, 0));

}