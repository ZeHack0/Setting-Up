/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** print_list
*/

#include <stdlib.h>

#include "../../include/my.h"

void print_list(linked_list_t *linked_list)
{
    node_t *tempo = linked_list->head;

    while (tempo != NULL) {
        my_putstr(tempo->data);
        my_putstr("\n");
        tempo = tempo->next;
    }
}
