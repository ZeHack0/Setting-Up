/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** .
*/

#include "project.h"

static int second_main(int argc, char **argv)
{
    char *map = load_map(argc, argv);
    int width = get_width(map);
    int height = get_height(argv[1]);
    int **cache = init_maps(map, width, height);
    struct position square = {-1, -1, -1};

    algorithm(cache, &square);
    set_biggest_square(map, &square, width);
    my_putstr(map);
    if (argc == -1)
        my_putstr("FAILURE\n");
    return 0;
}

int main(int argc, char **argv)
{
    if (my_strcmp(argv[1], "-h") == 0) {
        description();
        return 0;
    }
    if (check_all_error(argc) == 84) {
        return 84;
    } else {
        second_main(argc, argv);
    }
    return 0;
}
