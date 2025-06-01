/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** error_handling
*/

#include "project.h"

bool error_handling(const int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return mini_printf("Usage: ./my_program [options]\n"), false;
    if (ac == 2)
        if (check_is_file(av[1]) == false)
            return false;
    if (ac == 3)
        if (check_is_correct_generate_map(av[1], av[2]) == false)
            return false;
    return true;
}
