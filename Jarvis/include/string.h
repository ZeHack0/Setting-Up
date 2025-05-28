/*
** EPITECH PROJECT, 2025
** basic_lib
** File description:
** string
*/

#ifndef STRING_H
    #define STRING_H

    #include <stdbool.h>

char *my_convert_int_to_char(int nb);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
char **my_str_to_word_array(const char *str, const char *separator);
char *my_strcat(char *dest, const char *src);
bool my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *src);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, const char *src, int n);
bool my_strncmp(const char *s1, const char *s2, int size);
char *my_strncpy(char *dest, const char *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
void my_free_array_of_char(char **array);
void my_free_array_of_int(int **array, int size);

#endif /* STRING_H */
