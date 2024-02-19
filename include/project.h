/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** project.h
*/


#ifndef WORKSHOP_MAKEFILES_PROJECT_H
    #define WORKSHOP_MAKEFILES_PROJECT_H

    #include <stddef.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <string.h>
    #include <stdio.h>
    #include "../lib/include/my.h"

typedef struct position {
    int y;
    int x;
    int size;
} position_t;

int **init_maps(char *map, int width, int height);
int get_width(char const *size);
int get_height(char const *filepath);
char *load_map(int argc, char **argv);
void algorithm(int **cache, struct position *square);
void set_biggest_square(char *map, struct position *square, int width);
char nbr_char_line(const char *filepath);
void description(void);

int argument_error(int argc);
int check_all_error(int argc);

#endif //WORKSHOP_MAKEFILES_PROJECT_H
