/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Permet
*/

#include "../include/my.h"

int my_put_nbr(int nb)
{
    int clone = nb;
    int n = 0;
    int j;

    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    while (clone > 0) {
        n++;
        clone = clone / 10;
    }
    j = my_compute_power_rec(10, n - 1);
    for (int i = 0; i < n; i++) {
        my_putchar(nb / j + 48);
        nb = nb % j;
        j = j / 10;
    }
    return 0;
}
