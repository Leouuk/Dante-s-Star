/*
** EPITECH PROJECT, 2022
** solver
** File description:
** solver
*/

#ifndef DANTE_H
    #define DANTE_H

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <string.h>
    #include <stdlib.h>

    char **create_arr(char *map);
    int sizefile(char *filepath);
    int **solve(int **map);
    int **arr_to_int(char *map);
    int get_nb_line(int **map);
    int get_nb_row(int **map);
    int my_puttab(char **tab);
    void printmap(int **map);
    char **solving(int **map, char **c_map, int i, int j);
    void check_str(char *str);
    int lensize(char *map);
    int **arr_to_int_array(char *map);
    int my_strlen(char const *str);

#endif
