#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*check-function that hel to checks
*@tree:is a pointer to the root node of the tree
*Return: always success.
**/
int check(binary_tree_t *tree)
{
int right = 0;
int left = 0;
int check_value = 0;
if (tree == NULL)
return (0);
check_value = ((right = 1 + check((*tree).right))) +
(left = 1 + check((*tree).left));
return (check_value);
}
/**
*binary_tree_is_perfect-function that checks if a binary tree is perfect
*@tree:is a pointer to the root node of the tree to check
*Return: always success.
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
int right = check((*tree).right);
int left = check((*tree).left);
if (right != left)
return (0);
return (1);
}
