/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-pierre.bouillard
** File description:
** dante
*/

#include "dante.h"

int dante(int argc, char **argv, maze_t *maze)
{
    maze->width = my_getnbr(argv[1]);
    maze->height = my_getnbr(argv[2]);

    if (return_epitech_error(maze, argc, argv) == 84)
        return 84;
    if (argc == 4 && my_strncmp(argv[3], "perfect", 9) == 0) {
        perfect_generator(maze);
        print_map(maze);
    }
    return 0;
}
