/*
** EPITECH PROJECT, 2021
** cd
** File description:
** set new position
*/

#include "libmini.h"

int find_home(env_t *enviro)
{
    int i = 0;
    int y = -1;

    while (enviro[i].name != NULL) {
        if (my_strcmp(enviro[i].name, "HOME") == 0)
            y = i;
        i++;
    }
    return (y);
}

int move_cd(char **arr, int words, env_t *enviro)
{
    int i = 0;
    int x = 0;

    if (find_home(enviro) == -1)
        return (0);
    if (words == 1) {
        while (my_strcmp(enviro[i].name, "HOME") != 0)
            i++;
        i = chdir(enviro[i].value);
    } else
        i = do_cd(arr, words, enviro);
    return (0);
}