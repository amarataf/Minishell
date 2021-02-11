/*
** EPITECH PROJECT, 2021
** unsed
** File description:
** and set env
*/

#include "libmini.h"

env_t *unset(env_t *enviro, char **arr, int x)
{
    int i = 0;
    int y = 0;

    while (enviro[i].name != NULL)
        i++;
    env_t *new = malloc(sizeof(env_t) * (i + 1));
    i = 0;
    y = 0;
    while (enviro[i].name != NULL) {
        if (my_strcmp(enviro[i].name, arr[x]) != 0) {
            new[y].name = enviro[i].name;
            new[y].value = enviro[i].value;
            i++;
            y++;
        } else
            i++;
    }
    return (new);
}

env_t *unset_env(env_t *enviro, char **arr, int words)
{
    int i = 1;

    if (words == 1) {
        my_putstr("unsetenv: Too few arguments.\n");
        return (enviro);
    }
    while (i < words) {
        enviro = unset(enviro, arr, i);
        i++;
    }
    return (enviro);
}