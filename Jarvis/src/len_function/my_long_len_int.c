/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_len_int.c
*/

#include "../../include/my.h"

long int my_long_len_int(long int number)
{
    long int count = 0;

    while (number >= 10) {
        number = number / 10;
        count++;
    }
    return count + 1;
}
