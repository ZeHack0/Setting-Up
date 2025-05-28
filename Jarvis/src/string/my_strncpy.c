/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** Permet
*/

#include <stdlib.h>

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    if (dest == NULL || src == NULL || n <= 0)
        return NULL;
    for (; a < n && src[a] != '\0'; a++)
        dest[a] = src[a];
    for (; a < n; a++)
        dest[a] = '\0';
    dest[n] = '\0';
    return dest;
}
