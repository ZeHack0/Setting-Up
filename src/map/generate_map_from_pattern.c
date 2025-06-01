/*
** EPITECH PROJECT, 2025
** setting_up
** File description:
** generate_map_from_pattern
*/

#include "project.h"

static int reset_len(const char *map, int len)
{
    if (map[len] == '\0')
        len = 0;
    return len;
}

static
void fill_map_buffer(char *buffer, const char *map, const int size_len)
{
    int len = 0;
    int size_buffer = 0;

    for (int a = 0; a < size_len; a++) {
        for (int b = 0; b < size_len; b++) {
            buffer[size_buffer] = map[len];
            size_buffer++;
            len++;
            len = reset_len(map, len);
        }
        buffer[size_buffer] = '\n';
        size_buffer++;
    }
    buffer[size_buffer - 1] = '\0';
}

char *generate_map(const char *len_line, const char *map)
{
    int size_len = 0;
    char *buffer = NULL;

    size_len = my_getnbr(len_line);
    buffer = malloc(sizeof(char) * (size_len * (size_len + 1)));
    if (buffer == NULL)
        return NULL;
    fill_map_buffer(buffer, map, size_len);
    return buffer;
}
