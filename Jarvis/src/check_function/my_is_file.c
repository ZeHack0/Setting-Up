/*
** EPITECH PROJECT, 2025
** rework_robot_factory
** File description:
** my_is_file
*/

#include <stdbool.h>
#include <sys/stat.h>

#include "../../include/my.h"

bool is_file(char *file)
{
    struct stat file_stat;

    if (stat(file, &file_stat) == -1)
        return (WC(2, "Error in function open: No such file or directory.\n"),
            false);
    return true;
}
