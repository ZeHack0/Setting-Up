/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** strcat.c
*/

#include <stdlib.h>

#include "../../include/my.h"

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int z = 0;

    if (dest == NULL || src == NULL)
        return NULL;
    for (; dest[i] != '\0'; i++);
    for (; src[z] != '\0'; z++)
        dest[i + z] = src[z];
    dest[i + z] = '\0';
    return dest;
}
