/*
** EPITECH PROJECT, 2022
** dante
** File description:
** check
*/

#include "solver.h"

void check_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] != 'X' && str[i] != '*' && str[i] != '\n')
            exit(84);
    }
}
