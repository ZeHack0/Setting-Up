/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** project.h
*/

#ifndef STARTING_PROJECT_PROJECT_H
    #define STARTING_PROJECT_PROJECT_H

    #include "my.h"
    #include <time.h>
    #include <math.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <sys/stat.h>

typedef struct square_s {
    int size;
    int y;
    int x;
    int width;
} square_t;

bool check_is_file(const char *filepath);
bool check_is_correct_generate_map(const char *size_map, const char *pattern);

bool error_handling(int ac, char **av);
bool print_the_help(int ac, char **av);
int get_height_existent_map(const char *map);
int get_width_existent_map(const char *size);
bool setting_up(const int ac, char **av);

char *generate_map(const char *len_line, const char *map);
int **init_the_map_in_integer(const char *map, const int width,
    const int height);
bool found_biggest_square_in_map(char *map, const int width, const int height,
    int **copy_map);

void algo_found_biggest_square(int **copy_map, square_t *square);

#endif //STARTING_PROJECT_PROJECT_H
