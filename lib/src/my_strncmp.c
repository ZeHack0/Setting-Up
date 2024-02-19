/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** my_strncmp.c
*/

#include "../include/my.h"

int my_strncmp(const char *str1, const char *str2, size_t n)
{
    for (size_t i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            return (int) (unsigned) str1[i] - (int) (unsigned) str2[i];
        }
        if (str1[i] == '\0')
            return 0;
    }
    return 0;
}
