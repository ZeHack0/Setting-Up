/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** permet de retourner le nombre de caractère dans le script
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
