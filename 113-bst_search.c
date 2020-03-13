#include "binary_trees.h"
/**
 * bst_search - function that searches for a value in a Binary Search Tree
 * @tree: pointer const type
 * @value: int type
 * Return: nothing
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (!tree)
return (NULL);
if (tree->n == value)
return ((bst_t *)tree);
else if (tree->n < value)
return (bst_search(tree->right, value));
else
return (bst_search(tree->left, value));
}
