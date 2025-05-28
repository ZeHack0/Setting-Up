/*
** EPITECH PROJECT, 2025
** basic_lib
** File description:
** file_utils
*/

#ifndef FILE_UTILS_H
    #define FILE_UTILS_H

int create_a_file(const char *filename);
char *my_open_file(const char *filename);
char **my_open_directory(const char *dirname);
int write_in_file(char *file_name, char *mode, char *text);

#endif /* FILE_UTILS_H */
