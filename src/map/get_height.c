/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** get_height.c
*/

#include "../../include/project.h"

int get_height(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buff[501] = {0};
    int a = 0;

    read(fd, buff, 500);
    if (fd == -1) {
        my_putstr("FAILURE\n");
    }
    while (buff[a] != '\n') {
        a++;
    }
    a = my_getnbr(buff);
    if (a <= 0) {
        return 84;
    }
    return a;
}
