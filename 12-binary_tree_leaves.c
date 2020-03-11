#include <stdlib.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_leaves-function that counts the leaves in a binary tree
* of a node in a binary tree
*@tree:is a pointer to the node to measure the depth
*Return: always success.
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((*tree).left == NULL)
{
if ((*tree).right == NULL)
return (1);
}
return (binary_tree_leaves((*tree).right) + binary_tree_leaves((*tree).left));
}
