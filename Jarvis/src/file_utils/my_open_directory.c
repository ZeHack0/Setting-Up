/*
** EPITECH PROJECT, 2024
** starting_project
** File description:
** my_open
*/

#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

#include "../../include/my.h"

char **my_open_directory(const char *dirname)
{
    DIR *dir = opendir(dirname);
    int a = 0;
    struct dirent *entry;
    char **tab = malloc(sizeof(char *) * 1024);

    if (tab == NULL)
        return NULL;
    if (!dir) {
        mini_printf("ERROR: my_open_directory :"
                        "%s is not a directory\n", dirname);
        return NULL;
    }
    entry = readdir(dir);
    for (; entry != NULL; a++) {
        tab[a] = my_strdup(entry->d_name);
        entry = readdir(dir);
    }
    tab[a] = NULL;
    closedir(dir);
    return tab;
}
