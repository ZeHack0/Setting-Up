/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** error_handling
*/

#include "project.h"

static
int get_header_length(const char *file)
{
    int len;

    len = 0;
    while (file[len] != '\n' && file[len] != '\0')
        len++;
    return len;
}

static
int parse_expected_length(const char *file, int header_len)
{
    char *len_line;
    int expected_len;

    len_line = malloc(header_len + 1);
    if (len_line == NULL)
        return -1;
    my_strncpy(len_line, file, header_len);
    len_line[header_len] = '\0';
    expected_len = my_getnbr(len_line);
    free(len_line);
    return expected_len;
}

static
bool check_line_length(int current_len, int expected_len)
{
    if (current_len != expected_len)
        return false;
    return true;
}

static
bool process_newline(int *current_len, int expected_len, int *i,
    const char *file)
{
    if (file[*i] == '\n') {
        if (!check_line_length(*current_len, expected_len))
            return mini_printf("Error: Line length does not match "
                "expected length.\n"), false;
        *current_len = 0;
    } else
        (*current_len)++;
    (*i)++;
    return true;
}

static
bool validate_lines(const char *file, int start, int expected_len)
{
    int i;
    int current_line_len;

    i = start;
    current_line_len = 0;
    while (file[i] != '\0') {
        if (process_newline(&current_line_len, expected_len, &i, file)
            == false)
            return false;
    }
    if (current_line_len != 0)
        return check_line_length(current_line_len, expected_len);
    return true;
}

static
bool check_the_length_of_the_line_in_file(const char *file)
{
    int header_len;
    int expected_len;

    if (file == NULL)
        return false;
    header_len = get_header_length(file);
    if (header_len <= 0)
        return false;
    expected_len = parse_expected_length(file, header_len);
    if (expected_len < 0)
        return false;
    return validate_lines(file, header_len + 1, expected_len);
}

static
bool check_the_number_of_the_line_in_file(const char *file)
{
    int len = 0;
    int number_of_line = 0;
    char *len_line = NULL;

    while (file[len] != '\n' && file[len] != '\0')
        len++;
    len_line = malloc(len + 1);
    if (len_line == NULL)
        return mini_printf("Error: Memory allocation failed.\n"), false;
    my_strncpy(len_line, file, len);
    len_line[len] = '\0';
    for (; file[len] != '\0'; len++)
        if (file[len] == '\n')
            number_of_line++;
    if (number_of_line == 0 || number_of_line != my_getnbr(len_line)) {
        printf("Error: The number of lines in the file does not match.\n");
        return free(len_line), false;
    }
    free(len_line);
    return true;
}

static
bool check_file_char(const char *filepath)
{
    int len_file = 0;

    if (filepath[0] == '\0')
        return mini_printf("Error: File path is empty.\n"), false;
    for (int i = 0; filepath[i] != '\n'; i++)
        len_file++;
    for (; filepath[len_file] != '\0'; len_file++) {
        if (filepath[len_file] != '.' &&
            filepath[len_file] != 'o' &&
            filepath[len_file] != '\n')
            return mini_printf("Error: File path contains invalid "
                "characters.\n"), false;
    }
    if (check_the_number_of_the_line_in_file(filepath) == false)
        return false;
    if (check_the_length_of_the_line_in_file(filepath) == false)
        return false;
    return true;
}

static
bool check_is_file(const char *filepath)
{
    char *file = my_open_file(filepath);

    if (file == NULL)
        return mini_printf("Error: File '%s' not found.\n", filepath), false;
    if (check_file_char(file) == false)
        return free(file), false;
    free(file);
    return true;
}

bool error_handling(int ac, char **av)
{
    if (ac != 2)
        return mini_printf("Usage: ./my_program [options]\n"), false;
    if (check_is_file(av[1]) == false)
        return false;
    return true;
}
