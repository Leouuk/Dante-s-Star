/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** load map
*/

#include "solver.h"

int *check_char(char *map, int **map2, int j, int i)
{
    for (int k = 0; map[i] != '\n' && map[i] != '\0'; i += 1, k += 1) {
        if (map[i] == 'X')
            map2[j][k] = -1;
        else
            map2[j][k] = 0;
        map2[j][k + 1] = -2;
    }
    return map2[j];
}

int **arr_to_int_array(char *map)
{
    int **map2 = malloc(sizeof(int *) * (my_strlen(map)) + 1);
    int check = lensize(map);

    for (int j = 0, i = 0; i < my_strlen(map); j += 1) {
        map2[j] = malloc(sizeof(int *) * check + 1);
        map2[j] = check_char(map, map2, j, i);
        i += 1;
    }
    return map2;
}

char **create_arr(char *map)
{
    char **map2 = malloc(sizeof(char *) * (my_strlen(map)) + 1);

    check_str(map);
    for (int j = 0, i = 0; i < my_strlen(map); j += 1) {
        map2[j] = malloc(sizeof(char *) * strlen(map) + 1);
        for (int k = 0; map[i] != '\n' && map[i] != '\0'; i += 1, k += 1) {
            map2[j][k] = map[i];
        }
        i += 1;
    }
    return map2;
}
