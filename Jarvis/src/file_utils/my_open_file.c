/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_open
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "../../include/my.h"

char *my_open_file(const char *filename)
{
    int fd = 0;
    char *buff = NULL;
    struct stat file_stat;

    if (stat(filename, &file_stat) == -1)
        return NULL;
    fd = open(filename, O_RDONLY);
    buff = malloc(sizeof(char) * (file_stat.st_size + 1));
    if (buff == NULL) {
        mini_printf("Error in opening file\n");
        return NULL;
    }
    if (read(fd, buff, file_stat.st_size) != file_stat.st_size) {
        mini_printf("Error in reading file\n");
        free(buff);
        return NULL;
    }
    buff[file_stat.st_size] = '\0';
    return buff;
}
