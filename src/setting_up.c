/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** setting_up
*/

#include "project.h"

static
bool manage_setting_up_from_file(const char *file)
{
    char *map = NULL;
    int width = 0;
    int height = 0;
    int **copy_map = NULL;

    map = my_open_file(file);
    if (map == NULL)
        return NULL;
    width = get_width_existent_map(map);
    height = get_height_existent_map(map);
    if (width <= 0 || height <= 0)
        return false;
    found_biggest_square_in_map(map, width, height, copy_map);
    free(map);
    return true;
}

static
bool manage_setting_up_from_pattern(const char *size_map, const char *pattern)
{
    char *map = NULL;
    int width = 0;
    int height = 0;
    int **copy_map = NULL;

    map = generate_map(size_map, pattern);
    if (map == NULL)
        return NULL;
    width = my_getnbr(size_map);
    height = my_getnbr(size_map);
    if (width <= 0 || height <= 0)
        return false;
    found_biggest_square_in_map(map, width, height, copy_map);
    free(map);
    return true;
}

bool setting_up(const int ac, char **av)
{
    if (ac == 2) {
        if (manage_setting_up_from_file(av[1]) == false)
            return false;
    } else
        if (manage_setting_up_from_pattern(av[1], av[2]) == false)
            return false;
    return true;
}
