/*
** EPITECH PROJECT, 2022
** dante
** File description:
** else solve fct
*/

#include "solver.h"

int get_nb_row(int **map)
{
    int line = 0;

    for (int j = 0; map[0][j + 1] != -2; j += 1) {
        line += 1;
    }
    return line;
}

int get_nb_line(int **map)
{
    int line = 0;

    for (int i = 0; map[i] != NULL; i += 1) {
        for (int j = 0; map[i][j + 1] != -2; j += 1) {
        }
        line += 1;
    }
    return line;
}

char **solving(int **map, char **c_m, int j, int i)
{
    for (;c_m[0][0] != 'o';) {
        c_m[i][j] = 'o';
        if (map[i][j + 1] == 0 && map[i][j] != 0) {
            j = j + 1;
            continue;
        }
        if (map[i + 1] != NULL && map[i + 1][j] == 0 && c_m[i + 1][j] != 'o') {
            i += 1;
            continue;
        }
        if (j != 0 && map[i][j - 1] == 0) {
            j -= 1;
            continue;
        }
        if (i != 0 && map[i - 1][j] == 0) {
            i -= 1;
            continue;
        }
    }
    return c_m;
}
