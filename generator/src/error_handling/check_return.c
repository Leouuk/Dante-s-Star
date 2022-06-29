/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-pierre.bouillard
** File description:
** init_algo
*/

#include "dante.h"

int return_epitech_error(maze_t *maze, int argc, char **argv)
{
    if (!argv || !(*argv) || !maze)
        return 84;
    if (create_fill_map(maze) == 84)
        return 84;
    if (check_arg(argc, argv, maze) == 84
    || check_maze_dimension_value(maze) == 84)
        return 84;
    return 0;
}
