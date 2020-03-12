#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 *@tree: Pointer
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
if (tree->left)
binary_tree_delete(tree->left);
if (tree->right)
binary_tree_delete(tree->right);
free(tree);
}
