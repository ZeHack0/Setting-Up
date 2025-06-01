/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** algorithm_for_found_the_biggest_square
*/

#include "project.h"

static
int found_the_minimum_value(int **copy_map, const int i, const int j)
{
    int minimum = 0;
    int top = 0;
    int left = 0;
    int top_left = 0;

    if (i == 0 || j == 0)
        return 0;
    top = copy_map[i - 1][j];
    left = copy_map[i][j - 1];
    top_left = copy_map[i - 1][j - 1];
    minimum = top;
    if (left < minimum)
        minimum = left;
    if (top_left < minimum)
        minimum = top_left;
    return minimum;
}

static
void change_the_value(int **copy_map, const int i, const int j,
    square_t *square)
{
    int minimum = 0;

    if (copy_map[i][j] == 0)
        return;
    minimum = found_the_minimum_value(copy_map, i, j);
    copy_map[i][j] = minimum + 1;
    if (square->size < minimum + 1) {
        square->x = j;
        square->y = i;
        square->size = minimum + 1;
    }
}

void algo_found_biggest_square(int **copy_map, square_t *square)
{
    for (int i = 0; copy_map[i] != NULL; i++) {
        for (int j = 0; copy_map[i][j] != -1; j++) {
            change_the_value(copy_map, i, j, square);
        }
    }
}
