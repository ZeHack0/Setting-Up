/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_len_int.c
*/

#include "../../include/my.h"

int my_len_int(int number)
{
    int count = 0;

    while (number >= 10) {
        number = number / 10;
        count++;
    }
    return count + 1;
}
