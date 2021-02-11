/*
** EPITECH PROJECT, 2021
** is function
** File description:
** function
*/

#include "libmini.h"

int find_path(env_t *enviro)
{
    int i = 0;
    int y = -1;

    while (enviro[i].name != NULL) {
        if (my_strcmp(enviro[i].name, "PATH") == 0)
            y = i;
        i++;
    }
    return (y);
}

int count_paths(char *path)
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

int is_function(char **arr, env_t *enviro, int words)
{
    int y = 0;
    int e = 0;
    char *path = NULL;
    char **elec = NULL;

    if (find_path(enviro) == -1)
        return (0);
    path = enviro[find_path(enviro)].value;
    y = count_paths(path);
    elec = malloc(sizeof(char *) * (y));
    elec = my_path(path);
    while (e < y) {
        path = my_malloc(my_strlen(elec[e]) + my_strlen(arr[0]) + 2);
        path = my_strcat(my_strcat(my_strcat(path, elec[e++]), "/"), arr[0]);
        if (access(path, F_OK) == 0)
            return (1);
    }
    return (0);
}