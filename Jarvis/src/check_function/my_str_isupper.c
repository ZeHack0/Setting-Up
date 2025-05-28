/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_str_isupper.c
*/

#include <stdlib.h>

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    if (str == NULL)
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || str[i] > 'Z') {
            mini_printf("Error : my_str_isupper : %c is not upper", str[i]);
            return 84;
        }
    }
    return 0;
}
