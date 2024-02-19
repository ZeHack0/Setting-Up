/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** init_maps.c
*/

#include "../../include/project.h"

static void file_cache(char map_value, int **chache, int j, int i)
{
    if (map_value == 'o') {
        chache[j][i] = 0;
    } else if (map_value == '.') {
        chache[j][i] = 1;
    } else {
        chache[j][i] = -1;
    }
}

int **init_maps(char *map, int width, int height)
{
    int **cache = malloc(sizeof(int *) * (height + 1));

    for (int j = 0; j != height; j++) {
        cache[j] = malloc(sizeof(int) * (width +1));
        for (int i = 0; i != width + 1; i++) {
            file_cache(map[(width + 1) * j + i], cache, j, i);
        }
    }
    cache[height] = NULL;
    return cache;
}
