/*
** EPITECH PROJECT, 2021
** cd func
** File description:
** cd
*/

#include "libmini.h"

char *get_path(void)
{
    char *buf = NULL;
    size_t size = 0;

    buf = getcwd(buf, size);
    return (buf);
}

char *add_str(char *str)
{
    char *path = get_path();
    int i = my_strlen(path);
    i = i + my_strlen(str);
    char *new_pa = my_malloc(i + 1);
    int y = 0;
    int x = 0;

    while (path[y] != '\0') {
        new_pa[y] = path[y];
        y++;
    }
    new_pa[y] = '/';
    y++;
    while (str[x] != '\0') {
        new_pa[y] = str[x];
        y++;
        x++;
    }
    return (new_pa);
}

int do_cd(char **arr, int words, env_t *enviro)
{
    int i = 0;

    if (words > 2)
        my_putstr("cd: Too many arguments.\n");
    else {
        if (cd_home(arr, enviro) == 1)
            return (1);
        i = chdir(add_str(arr[1]));
        if (i == -1) {
            my_putstr(arr[1]);
            my_putstr(": No such file or directory.\n");
        }
    }
    return (0);
}