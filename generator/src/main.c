/*
** EPITECH PROJECT, 2022
** dante
** File description:
** start
*/

#include <stdlib.h>
#include "dante.h"

int main(int argc, char **argv)
{
    maze_t *maze = malloc(sizeof(maze_t));

    if (!maze)
        return 84;
    return (dante(argc, argv, maze));
}
