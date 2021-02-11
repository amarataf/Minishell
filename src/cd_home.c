/*
** EPITECH PROJECT, 2021
** cd home func
** File description:
** cd home
*/

#include "libmini.h"

void root(char **arr, env_t *enviro, int i, char *home)
{
    int x = 0;
    int y = 0;

    while (x < 2 && enviro[i].value[y] != '\0') {
        home[y] = enviro[i].value[y];
        if (enviro[i].value[y] == '/')
            x++;
        y++;
    }
    i = chdir(my_strcat(home, arr[1]));
    if (i == -1) {
        my_putstr(arr[1]);
        my_putstr(": No such file or directory.\n");
    }
}

void user(char **arr, char *home, char *val)
{
    int y = 2;

    home = my_malloc(my_strlen(arr[1]) + 1);
    home[0] = '/';
    while (arr[1][y] != '\0') {
        home[y - 1] = arr[1][y];
        y++;
    }
    val = my_strcat(val, home);
    y = chdir(val);
    if (y == -1) {
        my_putstr(val);
        my_putstr(": No such file or directory.\n");
    }
}

int cd_home(char **arr, env_t *enviro)
{
    int i = 0;
    int x = 0;
    char *home = NULL;
    char *val = NULL;

    while (my_strcmp(enviro[i].name, "HOME") != 0)
        i++;
    home = my_malloc(my_strlen(enviro[i].value));
    val = my_malloc(my_strlen(enviro[i].value));
    val = my_strdup(enviro[i].value);
    if (arr[1][0] == '/') {
        root(arr, enviro, i, home);
        return (1);
    } else if (my_strlen(arr[1]) > 1 && arr[1][0] == '~' && arr[1][1] == '/') {
        user(arr, home, val);
        return (1);
    }
    return (0);
}