/*
** EPITECH PROJECT, 2024
** my_secured_bs
** File description:
** my_strdup.c
*/

#include <stdlib.h>

#include "../../include/my.h"

char *my_strdup(const char *str)
{
    int len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (len + 1));
    char *ptr;

    if (new_str == NULL && len == 0)
        return NULL;
    ptr = new_str;
    while (*str) {
        *ptr = *str;
        ptr++;
        str++;
    }
    *ptr = '\0';
    return new_str;
}
