/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** Permet de séparer un part un les caractères de la chaine
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
