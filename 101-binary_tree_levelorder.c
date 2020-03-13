#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_levelorder-function that goes through a
*binary tree using level-order traversal
* of a binary tree of a node in a binary tree
*@tree:is a pointer to the root node of the tree to traverse
*@func:is a pointer to a function to call for each node.
* The value in the node must be passed as a parameter
* to this function.
*Return: always success.
**/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
}
