/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** get_size_map
*/

#include "project.h"

int get_width_existent_map(const char *size)
{
    int skip_first_line = 0;
    int width = 0;

    for (int a = 0; size[a] != '\n'; a++)
        skip_first_line++;
    for (int a = skip_first_line + 1; size[a] != '\n'; a++)
        width++;
    if (width == 0)
        return 84;
    return width;
}

int get_height_existent_map(const char *map)
{
    int height = 0;

    while (map[height] != '\n')
        height++;
    height = my_getnbr(map);
    if (height <= 0)
        return mini_printf("error: can't get size of map\n"), 84;
    return height;
}
