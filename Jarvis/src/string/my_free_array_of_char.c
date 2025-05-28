/*
** EPITECH PROJECT, 2025
** rework_robot_factory
** File description:
** my_free_array
*/

#include <stdlib.h>

#include "../../include/my.h"

void my_free_array_of_char(char **array)
{
    if (array == NULL)
        return;
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
