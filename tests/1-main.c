#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point allocated.
 *
 * Return: Always 0 (Success) if not -1
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
