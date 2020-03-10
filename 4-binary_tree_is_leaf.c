#include <stdlib.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_is_leaf-function that checks if a node is a leaf
*Return: always success.
*@node:is a pointer to the node to check
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if ((node == NULL) || ((*node).right) || ((*node).left))
return (0);
else
return (1);
}
