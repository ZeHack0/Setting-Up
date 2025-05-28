/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** free_node
*/

#include <stdlib.h>

#include "../../include/my.h"

void free_node(node_t *node)
{
    if (node == NULL)
        return;
    if (node->data != NULL)
        free(node->data);
    free(node);
}
