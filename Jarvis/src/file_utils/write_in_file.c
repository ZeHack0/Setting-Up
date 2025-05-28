/*
** EPITECH PROJECT, 2025
** robot-factory
** File description:
** write_in_file
*/

#include <stdio.h>

#include "../../include/my.h"

int write_in_file(char *file_name, char *mode, char *text)
{
    FILE *fptr = fopen(file_name, mode);

    if (fptr == NULL)
        return 0;
    fwrite(text, my_strlen(text), 1, fptr);
    fclose(fptr);
    return 0;
}
