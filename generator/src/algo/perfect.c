/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-pierre.bouillard
** File description:
** algo
*/

#include <stdlib.h>
#include <time.h>
#include "dante.h"

static void end_of_maze(maze_t *maze)
{
    maze->map[maze->height - 1][maze->width - 1] = '*';
    if (maze->width % 2 == 0 || maze->height % 2 == 0)
        maze->map[maze->height - 1][maze->width - 2] = '*';
}

static void case_random(maze_t *maze, int y, int x)
{
    if (rand() % 2 == 0) {
        maze->map[y][x - 1] = '*';
        maze->map[y][x] = '*';
    } else {
    maze->map[y - 1][x] = '*';
    maze->map[y][x] = '*';
    }
}

static void width_loop_and_generate_maze(maze_t *maze, int y)
{
    for (int x = 0; maze->map[y][x] != '\0'; x += 2) {
        if (x == 0 && y == 0) {
            maze->map[0][0] = '*';
            continue;
        }
        if (y == 0 && x > 0) {
            maze->map[y][x - 1] = '*';
            maze->map[y][x] = '*';
            continue;
        }
        if (x == 0 && y > 0) {
            maze->map[y - 1][x] = '*';
            maze->map[y][x] = '*';
            continue;
        }
        case_random(maze, y, x);
    }
}

int perfect_generator(maze_t *maze)
{
    srand(time(NULL));

    for (int y = 0; maze->map[y] != NULL; y += 2)
        width_loop_and_generate_maze(maze, y);
    end_of_maze(maze);
    return 0;
}
