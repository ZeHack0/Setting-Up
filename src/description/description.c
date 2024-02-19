/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** description.c
*/

#include "../../include/project.h"

void description(void)
{
    mini_printf("Air traffic simulation panel\n"
                "\n"
                "USAGE\n"
                " ./my_radar [OPTIONS] path_to_script\n"
                "  path_to_script    The path to the script file.\n"
                "\n"
                "OPTIONS\n"
                " -h                  print the usage and quit.\n"
                "\n"
                "USER INTERACTIONS\n"
                " ‘L’         key enable/disable hitboxes and areas.\n"
                " ‘S’         key enable/disable sprites.\n");
}
