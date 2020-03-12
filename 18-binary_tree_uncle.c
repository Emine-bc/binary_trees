#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
* binary_tree_uncle-function that finds the uncle of a node
*@node:is a pointer to the node to find the uncle
*Return: always success.
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
return (NULL);
if ((*node).parent == NULL)
return (NULL);
return (binary_tree_sibling((*node).parent));
}
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer
 * Return: Sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);
if (node->parent->right == node)
return (node->parent->left);
if (node->parent->left == node)
return (node->parent->right);
return (NULL);
}
