/*
** EPITECH PROJECT, 2025
** rework_robot_factory
** File description:
** my_count_element
*/

#include <stdio.h>

#include "../../include/my.h"

int my_count_element(char **file)
{
    int a = 0;

    for (int index = 0; file[index] != NULL; index++)
        a++;
    return a;
}
