/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-pierre.bouillard
** File description:
** print_map
*/

#include <stddef.h>
#include "dante.h"

void print_map(maze_t *maze)
{
    int x = 0;

    my_printf("%s", maze->map[x]);
    x ++;
    while (x < maze->height) {
        my_putchar('\n');
        my_printf("%s", maze->map[x]);
        x++;
    }
}
