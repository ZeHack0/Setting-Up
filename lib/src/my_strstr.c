/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** my_strstr.c
*/

#include "../include/my.h"

char *my_strstr(char *haystack, const char *needle)
{
    int a = my_strlen(needle);

    while (my_strncmp(haystack, needle, a) != 0) {
        haystack++;
        if (haystack[0] == '\0') {
            return 0;
        }
    }
    return haystack;
}
