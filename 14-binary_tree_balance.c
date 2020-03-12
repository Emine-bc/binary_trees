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
if ((*tree).right == NULL)
return (binary_tree_height((*tree).left) - binary_tree_height((*tree).right));
return (binary_tree_height((*tree).left) -
	binary_tree_height((*tree).right) - 1);
}