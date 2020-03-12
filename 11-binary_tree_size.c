#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Size of a binary tree
 *@tree: Pointer 
 * Return: total size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
int size_right;
int size_left;
if (tree == NULL)
return (0);
size_left = binary_tree_size(tree->left);
size_right = binary_tree_size(tree->right);
return (size_right + size_left + 1);
}


