/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** nbr_char_line.c
*/

#include "../../include/project.h"

char nbr_char_line(const char *filepath)
{
    const char *n = filepath;

    my_putstr(n);
    my_putchar('\n');
    return 0;
}
