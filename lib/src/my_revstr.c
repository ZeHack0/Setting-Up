/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** Permet
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str)-1;
    char a;

    while (str[i] != '\0') {
        if (len > i) {
            a = str[len];
            str[len] = str[i];
            str[i] = a;
            len = len - 1;
        }
        i = i + 1;
    }
    return str;
}
