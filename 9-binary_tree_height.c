#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer
 * Return: measure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int measure_r = 0, measure_l = 0;
if (tree == NULL)
return (0);
if (tree->right)
measure_r = binary_tree_height(tree->right) + 1;
if (tree->left)
measure_l = binary_tree_height(tree->left) + 1;
if (measure_r > measure_l)
return (measure_r);
else
return (measure_l);
}
