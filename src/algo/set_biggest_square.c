/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** set_biggest_square.c
*/

#include "../../include/project.h"

void set_biggest_square(char *map, struct position *square, int width)
{
    for (int j = 0; j < square->size; j++) {
        for (int i = 0; i < square->size; i++) {
            map[(width + 1) * (square->y - j) + (square->x - i)] = 'x';
        }
    }
}
