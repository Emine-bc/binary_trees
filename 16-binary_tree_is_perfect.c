#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree);
/**
*check-function that hel to checks
*@tree:is a pointer to the root node of the tree
*@count:is a compteur
*@i: variable help check
*Return: always success.
**/
size_t check(const binary_tree_t *tree, size_t count, size_t i)
{
int x = 0;
int y = 0;
if (tree == NULL)
return (0);
if (!(*tree).left && !(*tree).right)
return (count == i + 1);
if (!(*tree).left || !(*tree).right)
return (0);
x = check((*tree).left, count, i + 1);
y = check((*tree).right, count, i + 1);
return (x *y);
}
/**
*binary_tree_is_perfect-function that checks if a binary tree is perfect
*@tree:is a pointer to the root node of the tree to check
*Return: always success.
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int result = 0, nil = 0;
if (!tree)
return (0);
size_t count = binary_tree_depth(tree);
result = check(tree, count, nil);
return (result);
}
/**
* binary_tree_depth-unction that measures the depth
* of a node in a binary tree
*@tree:is a pointer to the node to measure the depth
*Return: always success.
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count;
for (count = 0; tree != NULL; count++)
tree = (*tree).left;
return (count);
}
