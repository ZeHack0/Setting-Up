/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** init_list
*/

#include <stdlib.h>

#include "../../include/my.h"

linked_list_t *init_list(void)
{
    linked_list_t *linked_list = malloc(sizeof(linked_list_t));

    if (linked_list == NULL)
        return NULL;
    linked_list->head = NULL;
    linked_list->tail = NULL;
    return linked_list;
}
