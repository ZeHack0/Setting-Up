/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** load_map.c
*/

#include "../../include/project.h"

char *load_map(int argc, char **argv)
{
    int fd;
    struct stat file_stat;
    char *buff;

    if (argc)
    if (stat(argv[1], &file_stat) == -1) {
        return NULL;
    }
        fd = open(argv[1], O_RDONLY);
        buff = malloc(sizeof(char) * (file_stat.st_size + 1));
        read(fd, buff, file_stat.st_size);
        buff[file_stat.st_size] = '\0';
        buff = my_strstr(buff, "\n");
        buff = buff + 1;
        return buff;
}
