/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** find_node
*/

#include <stdlib.h>

#include "../../include/my.h"

node_t *find_node(linked_list_t *linked_list, void *data)
{
    node_t *node = linked_list->head;

    while (node != NULL && node->data != NULL) {
        if (!my_strcmp(node->data, data)) {
            break;
        }
        node = node->next;
    }
    return node;
}
