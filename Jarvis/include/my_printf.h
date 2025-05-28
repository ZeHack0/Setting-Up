/*
** EPITECH PROJECT, 2025
** basic_lib
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H

    #include <stdarg.h>
    #include <stddef.h>
    #include <unistd.h>

typedef struct fnct {
    char flag;
    int (*funct)(va_list);
} fnct_t;

int my_printf(const char *format, ...);

int fnct_s(va_list list);
int fnct_c(va_list list);
int fnct_i(va_list list);
int fnct_d(va_list list);
int fnct_prct(va_list list);
int fnct_u(va_list list);
int fnct_o(va_list list);
int fnct_n(int *nb, va_list list);
int fnct_f(const char *format, int a, va_list list);
int fnct_x(va_list list);
int fnct_x_upper(va_list list);
int fnct_p(va_list list);
int display_hexa_lowercase(unsigned int convert_number);
int fnct_a(va_list list);

#endif //MY_PRINTF_H
