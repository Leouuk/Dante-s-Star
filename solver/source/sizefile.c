/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "solver.h"

int lensize(char *map)
{
    int i = 0;
    while (map[i] != '\n') {
        i += 1;
    }
    return i;
}

int sizefile(char *filepath)
{
    struct stat buffer;

    if (stat(filepath, &buffer) == 1)
        return (84);
    return buffer.st_size;
}
