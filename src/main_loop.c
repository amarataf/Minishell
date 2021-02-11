/*
** EPITECH PROJECT, 2020
** main
** File description:
** main for pushswap
*/

#include "libmini.h"

char *new_line(void)
{
    char *msg = NULL;
    size_t length = 0;
    ssize_t size = 0;

    my_putstr("$> ");
    size = getline(&msg, &length, stdin);
    if (size == -1) {
        my_putstr("exit\n");
        exit(0);
    }
    return (msg);
}

int check_imp(char **arr)
{
    if (my_strcmp(arr[0], "env") == 0)
        return (1);
    if (my_strcmp(arr[0], "setenv") == 0)
        return (1);
    if (my_strcmp(arr[0], "unsetenv") == 0)
        return (1);
    if (my_strcmp(arr[0], "cd") == 0)
        return (1);
    return (0);
}

env_t *go_to_func(char **arr, int words, env_t *enviro)
{
    int i = 0;

    if (my_strcmp(arr[0], "env") == 0)
        print_env(enviro, words);
    if (my_strcmp(arr[0], "setenv") == 0)
        enviro = set_env(enviro, arr, words);
    if (my_strcmp(arr[0], "unsetenv") == 0)
        enviro = unset_env(enviro, arr, words);
    if (my_strcmp(arr[0], "cd") == 0)
        i = move_cd(arr, words, enviro);
    return (enviro);
}

env_t *env_hand(char *inp, env_t *enviro)
{
    char **arr = my_str_to_word_array(inp);
    int words = count_w(inp);
    int x = 0;

    if (check_imp(arr) == 1)
        enviro = go_to_func(arr, words, enviro);
    else if (is_function(arr, enviro, words) == 1)
        do_func(arr, enviro, words);
    else {
        if (my_strcmp(arr[0], "exit") != 0) {
            my_putstr(arr[0]);
            my_putstr(": Command not found.\n");
        }
    }
    return (enviro);
}

int main_loop(int argc, char **argv, char **env)
{
    char *inp = my_malloc(1);
    char **arr = NULL;
    int i = 0;

    if (env[0] == NULL)
        exit(84);
    while (env[i] != NULL)
        i++;
    env_t *enviro = malloc(sizeof(env_t) * (i + 1));
    enviro = create_env(enviro, env);
    while (1) {
        inp = my_strdup(new_line());
        arr = my_str_to_word_array(inp);
        if (my_strcmp(inp, "\n") != 0) {
            arr = my_str_to_word_array(inp);
            enviro = if_exit(inp, arr, enviro);
        }
    }
    return (0);
}