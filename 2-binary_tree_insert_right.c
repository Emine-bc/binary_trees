#include <stdlib.h>
#include <stdlib.h>
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
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (node == NULL || parent == NULL)
return (NULL);
(*node).n = value;
if ((*parent).right == NULL)
(*parent).right = node;
else
{
(*node).right = (*parent).right;
(*parent).right = node;
(*node).right->parent = node;
}
return (node);
}
