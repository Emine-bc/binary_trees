#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_is_bst-function that checks if a binary
*tree is a valid Binary Search Treer
* of a binary tree of a node in a binary tree
*@tree: is a pointer to the root node of the tree to check
*Return: always success.
**/
int binary_tree_is_bst(const binary_tree_t *tree)
if (tree == NULL)
return (0);
if ((*tree).right == NULL || (*tree).left == NULL)
return (1);
}
