/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** help
*/

#include "project.h"

static
void print_usage(void)
{
    mini_printf("USAGE\n"
        "    ./setting_up [file]\n"
        "    ./setting_up [size] [pattern]\n\n");
}

static
void print_description(void)
{
    mini_printf("DESCRIPTION\n"
        "    This program finds the largest possible square in a grid, "
        "avoiding obstacles.\n\n");
}

static
void print_input_methods(void)
{
    mini_printf("INPUT METHODS\n"
        "    file\n"
        "        A text file describing the board.\n"
        "       - First line: number of lines (only digits)\n"
        "       - Following lines: characters '.' for empty and 'o'"
        " for obstacles\n"
        "        - All lines must be the same length\n"
        "        - Each line must end with a newline '\\n'\n\n"
        "    width height pattern\n"
        "        Instead of using a file, generate a board.\n"
        "        - width: number of columns (positive integer)\n"
        "        - height: number of rows (positive integer)\n"
        "        - pattern: string pattern to repeat on each row\n\n");
}

static
void print_output(void)
{
    mini_printf("OUTPUT\n"
        "    The board is printed with the largest square marked "
        "using 'x'.\n\n");
}

static
void print_options(void)
{
    mini_printf("OPTIONS\n"
        "    -h, --h, --help\n"
        "        Show this help message and exit successfully.\n\n");
}

static
void print_error_handling(void)
{
    mini_printf("ERROR HANDLING\n"
        "    - Invalid files or arguments will print an error message to "
        "stderr\n"
        "    - The program exits with code 84 on error, 0 on success\n");
}

bool print_the_help(int ac, char **av)
{
    if (ac == 2 &&
        (my_strcmp(av[1], "-h") == true ||
        my_strcmp(av[1], "--h") == true ||
        my_strcmp(av[1], "--help") == true)) {
        print_usage();
        print_description();
        print_input_methods();
        print_output();
        print_options();
        print_error_handling();
        return true;
    }
    return false;
}
