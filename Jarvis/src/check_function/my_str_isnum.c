/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_str_isnum.c
*/

#include <stdlib.h>

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    if (str == NULL) {
        mini_printf("ERROR : my_str_isnum : %s is null\n", str);
        return 84;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57) {
            return 84;
        }
    }
    return 0;
}
