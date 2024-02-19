/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** .
*/

#ifndef MY_H
    #define MY_H

    #include "stdlib.h"

int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
char *my_strdup(const char *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
char **my_str_to_word_array(const char *str, const char *separator);
char *my_strncpy(char *dest, char const *src, int num);
char *my_strstr(char *haystack, const char *needle);
int my_strncmp(const char *str1, const char *str2, size_t n);

#endif //MY_H
