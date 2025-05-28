/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** add_list
*/

#include <stdlib.h>

#include "../../include/my.h"

void add_list(linked_list_t *linked_list, void *data)
{
    node_t *node = create_node_var(data);

    if (node == NULL)
        return;
    if (linked_list->head == NULL) {
        linked_list->head = node;
        linked_list->tail = node;
        return;
    }
    linked_list->tail->next = node;
    node->prev = linked_list->tail;
    linked_list->tail = node;
}
