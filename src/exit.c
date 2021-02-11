/*
** EPITECH PROJECT, 2021
** exit
** File description:
** exit func
*/

#include "libmini.h"

void exit_f(char *inp, char **arr)
{
    if (count_w(inp) == 1) {
        my_putstr("exit\n");
        exit(0);
    } else if (count_w(inp) == 2 && my_str_isnum(arr[1]) == 1) {
        my_putstr("exit\n");
        exit(my_getnbr(arr[1]));
    } else {
        if (arr[1][0] > 58 || arr[1][0] < 48)
            my_putstr("exit: Expression Syntax.\n");
        else
            my_putstr("exit: Badly formed number.\n");
    }
}

env_t *if_exit(char *inp, char **arr, env_t *enviro)
{
    if (my_strcmp(arr[0], "exit") == 0)
        exit_f(inp, arr);
    enviro = env_hand(inp, enviro);
    return (enviro);
}