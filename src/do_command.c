/*
** EPITECH PROJECT, 2021
** command
** File description:
** existing ls
*/

#include "libmini.h"

int do_command(char **arr, char *path)
{
    int pid = fork();
    int integer = 0;
    int i = 0;

    if (pid == 0) {
        i = execve(path, arr, NULL);
    }
    waitpid(pid, &integer, 0);
    if (i != 0) {
        my_putstr("Segmentation fault\n");
    }
    return (0);
}