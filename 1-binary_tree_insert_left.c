#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer 
 *@value: value int type
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
binary_tree_t *old_node;
if (parent == NULL)
return (NULL);
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->left != NULL)
{
old_node = parent->left;
new_node->left = old_node;
old_node->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
