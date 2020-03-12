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
	binary_tree_t *tree, *tmp;

	if (parent == NULL)
		return (NULL);
	tree = binary_tree_node(parent, value);
	if (tree == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = tree;
	}
	else
	{
		tmp = parent->right;
		tmp->parent = tree;
		tree->right = tmp;
		parent->right = tree;

	}
	return (tree);
}
