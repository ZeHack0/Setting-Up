/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** check_all_error.c
*/

#include "project.h"

int check_all_error(int argc)
{
    if (argument_error(argc) == 84)
        return 84;
    return 0;
}
