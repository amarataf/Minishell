/*
** EPITECH PROJECT, 2021
** set
** File description:
** and unset env
*/

#include "libmini.h"

env_t *fill_value(env_t *enviro, int words, int i, char **arr)
{
    env_t *new = malloc(sizeof(env_t) * (i + 1));
    int y = 0;

    i = 0;
    while (enviro[i].name != NULL) {
        new[i].name = enviro[i].name;
        new[i].value = enviro[i].value;
        i++;
    }
    new[i].name = arr[1];
    if (words == 3)
        new[i].value = arr[2];
    else
        new[i].value = my_strdup("");
    return (new);
}

env_t *case_two(env_t *enviro, char **arr, int words)
{
    int i = 0;
    int y = 0;

    while (enviro[i].name != NULL) {
        if (my_strcmp(enviro[i].name, arr[1]) == 0)
            y = i + 1;
        i++;
    }
    if (y > 0) {
        if (words == 3)
            enviro[y - 1].value = arr[2];
        else
            enviro[y - 1].value = my_strdup("");
    } else {
        enviro = fill_value(enviro, words, i, arr);
    }
    return (enviro);
}

void case_one(env_t *enviro, int words)
{
    print_env(enviro, words);
}

env_t *set_env(env_t *enviro, char **arr, int words)
{
    if (words == 1)
        case_one(enviro, words);
    else if (words == 2 || words == 3)
        enviro = case_two(enviro, arr, words);
    else
        my_putstr("setenv: Too many arguments.\n");
    return (enviro);
}