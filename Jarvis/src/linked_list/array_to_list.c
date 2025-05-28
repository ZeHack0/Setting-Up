/*
** EPITECH PROJECT, 2024
** bs_organized
** File description:
** array_to_list
*/

#include "../../include/my.h"

void array_to_list(char **node, linked_list_t *linked_list)
{
    char **temp;

    for (int i = 0; node[i]; i++) {
        temp = my_str_to_word_array(node[i], "=");
        add_list(linked_list, temp[0]);
    }
}
