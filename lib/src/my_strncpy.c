/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Permet
*/

#include "../include/my.h"

char *my_strncpy(char *dest, char const *src, int num)
{
    int i = 0;

    while (src[i] != '\0' && i < num) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = ('\0');
    return dest;
}
