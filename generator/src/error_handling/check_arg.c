/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-pierre.bouillard
** File description:
** check_arg
*/

#include "dante.h"

int check_arg(int argc, char **argv, maze_t *maze)
{
    if (argc < 3 || argc > 4 || !argv || (!(*argv)) || !maze)
        return 84;
    return 0;
}

int check_maze_dimension_value(maze_t *maze)
{
    if (maze->width <= 0 || maze->height <= 0)
        return 84;
    return 0;
}
