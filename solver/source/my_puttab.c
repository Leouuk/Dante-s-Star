/*
** EPITECH PROJECT, 2022
** my_puttab.c
** File description:
** my_puttab
*/

#include "solver.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return 0;
}

int my_puttab(char **tab)
{
    int i = 0;

    if (tab[0] == NULL)
        return 84;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
