#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is ful
 * @tree: pointer
 * Return: nothing
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
else if (!tree->left && !tree->right)
{
return (1);
}
else if (tree->left && tree->right)
{
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));
}
return (0);
}


