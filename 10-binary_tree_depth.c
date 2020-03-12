#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_depth-unction that measures the depth
* of a node in a binary tree
*@tree:is a pointer to the node to measure the depth
*Return: always success.
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL)
return (0);
for (count = 0; (*tree).parent != NULL; count++)
tree = (*tree).parent;
return (count);
}
