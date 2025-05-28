/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** main.c
*/

#include "project.h"

int main(int ac, char **av)
{
    if (print_the_help(ac, av) == true)
        return 0;
    if (error_handling(ac, av) == false)
        return 84;
    printf("initializing the project...\n");
    return 0;
}
