/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** algorithm.c
*/

#include "../../include/project.h"

static int get_minimum(int **cache, int j, int i)
{
    int top;
    int left;
    int top_left;
    int min;

    if (j == 0 || i == 0)
        return 0;
    top = cache[j - 1][i];
    left = cache[j][i - 1];
    top_left = cache[j - 1][i - 1];
    min = top;
    if (left < min)
        min = left;
    if (top_left < min)
        min = top_left;
    return min;
}

static void set_value(int **cache, int j, int i, struct position *square)
{
    int min;

    if (cache[j][i] == 0)
        return;
    min = get_minimum(cache, j, i);
    cache[j][i] = min + 1;
    if (square->size < min + 1) {
        square->x = i;
        square->y = j;
        square->size = min + 1;
    }
}

void algorithm(int **cache, struct position *square)
{
    for (int j = 0; cache[j] != NULL; j++) {
        for (int i = 0; cache[j][i] != -1; i++) {
            set_value(cache, j, i, square);
        }
    }
}
