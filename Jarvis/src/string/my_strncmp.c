/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** Permet
*/

#include "../../include/my.h"
#include <stdbool.h>

bool my_strncmp(const char *s1, const char *s2, int size)
{
    int a = 0;

    while (*s1 != '\0' && *s2 != '\0' && a < size) {
        if (*s1 != *s2) {
            return false;
        }
        s1++;
        s2++;
        a++;
    }
    return true;
}
