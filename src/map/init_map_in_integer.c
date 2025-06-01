/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** init_map_in_integer
*/

#include "project.h"

static
void convert_map(const char map, int **copy_map, const int j, const int i)
{
    if (map == 'o')
        copy_map[j][i] = 0;
    else if (map == '.')
        copy_map[j][i] = 1;
    else
        copy_map[j][i] = -1;
}

int **init_the_map_in_integer(const char *map, const int width,
    const int height)
{
    int **copy_map = malloc(sizeof(int *) * (height + 1));

    if (copy_map == NULL)
        return NULL;
    for (int j = 0; j != height; j++) {
        copy_map[j] = malloc(sizeof(int) * (width + 1));
        if (copy_map[j] == NULL)
            return NULL;
        for (int i = 0; i != width + 1; i++)
            convert_map(map[(width + 1) * j + i], copy_map, j, i);
        copy_map[j][width] = -1;
    }
    copy_map[height] = NULL;
    return copy_map;
}
