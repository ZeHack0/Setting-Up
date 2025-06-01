/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** found_biggest_square_in_map
*/

#include <ctype.h>

#include "project.h"

static
void set_biggest_square(char *map, const square_t *square,
    const int width)
{
    for (int j = 0; j < square->size; j++) {
        for (int i = 0; i < square->size; i++) {
            map[((width + 1) * (square->y - j)) +
                (square->x - i)] = 'x';
        }
    }
}

static
void print_map_colored(char *map)
{
    for (int i = 0; map[i]; i++) {
        if (map[i] == 'x')
            printf("\033[31mx\033[0m");
        else
            putchar(map[i]);
    }
    printf("\033[0m");
}

bool found_biggest_square_in_map(char *map, const int width, const int height,
    int **copy_map)
{
    square_t square = {0, -1, -1, width};

    if (isdigit(map[0]))
        map = map + my_len_int(height) + 1;
    copy_map = init_the_map_in_integer(map, width, height);
    algo_found_biggest_square(copy_map, &square);
    set_biggest_square(map, &square, width);
    print_map_colored(map);
    my_free_array_of_int(copy_map, height);
    return true;
}
