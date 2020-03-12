#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_insert_right-function that inserts a node as the
* right-child of another node
*@parent:is a pointer to the parent node of the node to create
*@value:is the value to put in the new node
*Return: always success.
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);
node = binary_tree_node(parent, value);
if (node == NULL)
return (NULL);
if ((*parent).right)
{
(*parent).right->parent = node;
(*node).right = (*parent).right;
}
(*parent).right = node;
return (node);
}
