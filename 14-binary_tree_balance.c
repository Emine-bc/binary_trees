#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_balance-function that measures the balance factor
* of a binary tree of a node in a binary tree
*@tree:a pointer to the root node of the tree to measure the balance
*Return: always success.
**/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree ==  NULL)
return (0);
return (binary_tree_height((*tree).left) - binary_tree_height((*tree).right));
}
/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer
 * Return: measure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int measure_r = 0, measure_l = 0;
if (tree == NULL)
return (-1);
if (tree->right)
measure_r = binary_tree_height(tree->right) + 1;
if (tree->left)
measure_l = binary_tree_height(tree->left) + 1;
if (measure_r > measure_l)
return (measure_r);
else
return (measure_l);
}
