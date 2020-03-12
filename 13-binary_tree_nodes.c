#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Count the nodes with at least 1 child
 *@tree: Pointer
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left || tree->right)
return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
return (0);
}
