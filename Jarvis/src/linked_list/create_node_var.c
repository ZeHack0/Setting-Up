/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** create_node_var
*/

#include <stdlib.h>

#include "../../include/my.h"

node_t *create_node_var(void *data)
{
    node_t *node = malloc(sizeof(node_t));

    if (node == NULL)
        return NULL;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}
