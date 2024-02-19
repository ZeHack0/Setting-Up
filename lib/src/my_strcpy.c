/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Permet
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
            n = n + 1;
        }
        return n;
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = ('\0');
    return dest;
}
