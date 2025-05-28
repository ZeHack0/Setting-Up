/*
** EPITECH PROJECT, 2025
** robot-factory
** File description:
** create_a_file
*/

#include <stdio.h>

#include "../../include/my.h"

int create_a_file(const char *file_name)
{
    FILE *fptr = fopen(file_name, "w");

    if (fptr == NULL)
        return 0;
    fclose(fptr);
    return 0;
}
