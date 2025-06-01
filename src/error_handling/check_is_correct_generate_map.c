/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** check_is_correct_generate_map
*/

#include <ctype.h>

#include "project.h"

bool check_is_correct_generate_map(const char *size_map, const char *pattern)
{
    for (int i = 0; size_map[i] != '\0'; i++)
        if (!isdigit(size_map[i]))
            return printf("Error: Size of the map is invalid.\n"), false;
    for (int i = 0; pattern[i] != '\0'; i++)
        if (pattern[i] != '.' && pattern[i] != 'o')
            return printf("Error: Pattern is invalid.\n"), false;
    return true;
}
