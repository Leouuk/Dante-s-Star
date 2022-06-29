/*
** EPITECH PROJECT, 2022
** dante
** File description:
** generator
*/

#include <stddef.h>
#include <stdlib.h>
#include "dante.h"

int create_fill_map(maze_t *maze)
{
    maze->map = malloc(sizeof(char *) * (maze->height + 1));
    if (!maze->map)
        return 84;

    for (int y = 0; y < maze->height; y += 1) {
        maze->map[y] = malloc(sizeof(char) * (maze->width + 1));
        if (!maze->map[y])
            return 84;
        for (int x = 0; x < maze->width; x += 1) {
            maze->map[y][x] = 'X';
        }
        maze->map[y][maze->width] = '\0';
    }
    maze->map[maze->height] = NULL;
    return 0;
}
