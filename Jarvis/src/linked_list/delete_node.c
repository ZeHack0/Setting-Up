/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** delete_node
*/

#include <stdlib.h>

#include "../../include/my.h"

void delete_node(linked_list_t *linked_list, void *data)
{
    node_t *node = find_node(linked_list, data);

    if (node == NULL)
        return;
    if (node->next != NULL)
        node->next->prev = node->prev;
    if (node->prev != NULL)
        node->prev->next = node->next;
    if (node == linked_list->head)
        linked_list->head = linked_list->head->next;
    if (node == linked_list->tail)
        linked_list->tail = linked_list->tail->prev;
    free(node);
}
