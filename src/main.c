/*
** EPITECH PROJECT, 2021
** main
** File description:
** main.c
*/

#include "libmini.h"

int main(int argc, char **argv, char **env)
{
    int i = 0;

    i = main_loop(argc, argv, env);
    return (i);
}