/*
** EPITECH PROJECT, 2022
** dante
** File description:
** start
*/

#include "solver.h"

int main(int ac, char **av)
{
    int size = sizefile(av[1]);
    int fd = open(av[1], O_RDONLY);
    char *str = malloc(sizeof(char *) * size + 1);
    char **map;
    int **real_map;
    int i = 0, j = 0;

    if (ac != 2)
        return 84;
    if (fd == -1)
        return 84;
    read(fd, str, size + 1);
    str[size + 1] = '\0';
    map = create_arr(str);
    real_map = arr_to_int_array(str);
    j = get_nb_line(real_map) - 1;
    i = get_nb_row(real_map);
    map = solving(real_map, map, j, i);
    my_puttab(map);
    return 0;
}
