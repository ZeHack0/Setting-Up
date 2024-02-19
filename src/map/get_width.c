/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** get_width.cs
*/

#include "project.h"

int get_width(char const *size)
{
    int a = 0;

    while (size[a] != '\n' && size[a] != '\0') {
        a++;
    }
    if (a == 0)
        return 84;
    return a;
}
