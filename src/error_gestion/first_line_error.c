/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** first_line_error.c
*/

#include "project.h"

static int check(int size_first, int size, int *ret)
{
    if (size != size_first)
        *ret = 84;
    return 0;
}

int first_line_error(int argc, char **argv)
{
    int i = 0;
    int ret = 0;
    char *map = load_map(argc, argv);
    int size_first = 0;
    int size;

    while (map[i] != '\0') {
        if (map[i] == '\n') {
            size = get_width(map);
            map = map + size + 1;
            check(size_first, size, &ret);
            i = 0;
        } else {
            i++;
        }
    }
    return ret;
}
