/*
** EPITECH PROJECT, 2021
** funct
** File description:
** doer
*/

#include "libmini.h"

int count_pathso(char *path)
{
    int i = 0;
    int y = 0;

    while (path[i] != '\0') {
        if (path[i] == ':')
            y++;
        i++;
    }
    return (y);
}

void do_func(char **arr, env_t *enviro, int words)
{
    int i = 0;
    int e = 0;
    char *path = NULL;
    char **elec = NULL;

    while (my_strcmp(enviro[i].name, "PATH") != 0)
        i++;
    path = enviro[i].value;
    i = count_pathso(path);
    elec = malloc(sizeof(char *) * (i));
    elec = my_path(path);
    i = 0;
    while (i != 1) {
        path = my_malloc(my_strlen(elec[e]) + my_strlen(arr[0]) + 2);
        path = my_strcat(my_strcat(my_strcat(path, elec[e]), "/"), arr[0]);
        if (access(path, F_OK) == 0)
            i = 1;
        e++;
    }
    i = do_command(arr, path);
}