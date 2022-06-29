/*
** EPITECH PROJECT, 2022
** generator
** File description:
** generator
*/

#ifndef DANTE_H
    #define DANTE_H

    #include "my.h"
    typedef struct maze_s {
    char **map;
    int height;
    int width;
    } maze_t;

    void print_map(maze_t *maze);
    int perfect_generator(maze_t *maze);
    int create_fill_map(maze_t *maze);
    int check_maze_dimension_value(maze_t *maze);
    int dante(int argc, char **argv, maze_t *maze);
    int check_arg(int argc, char **argv, maze_t *maze);
    int return_epitech_error(maze_t *maze, int argc, char **argv);

#endif
