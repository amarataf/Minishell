/*
** EPITECH PROJECT, 2021
** print env
** File description:
** env
*/

#include "libmini.h"

void print_env(env_t *enviro, int words)
{
    int i = 0;

    while (enviro[i].name != NULL) {
        my_putstr(enviro[i].name);
        my_putstr("=");
        my_putstr(enviro[i].value);
        my_putstr("\n");
        i++;
    }
}