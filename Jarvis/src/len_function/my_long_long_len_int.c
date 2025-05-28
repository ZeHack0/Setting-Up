/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_len_int.c
*/

#include "../../include/my.h"

long long int my_long_long_len_int(long long int number)
{
    long long int count = 0;

    while (number >= 10) {
        number = number / 10;
        count++;
    }
    return count + 1;
}
