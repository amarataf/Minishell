/*
** EPITECH PROJECT, 2021
** env
** File description:
** env functions
*/

#include "libmini.h"

int name_len(char *str)
{
    int i = 0;

    while (str[i] != '=')
        i++;
    return (i);
}

char *get_name(char *str)
{
    char *nam = my_malloc(name_len(str) + 1);
    int i = 0;

    while (str[i] != '=') {
        nam[i] = str[i];
        i++;
    }
    return (nam);
}

char *get_val(char *str)
{
    char *val = my_malloc(my_strlen(str) - name_len(str) + 1);
    int i = name_len(str) + 1;
    int w = 0;

    while (str[i] != '\0') {
        val[w] = str[i];
        w++;
        i++;
    }
    return (val);
}

env_t *assign_env(env_t *enviro, char *str, int i)
{
    enviro[i].name = get_name(str);
    enviro[i].value = get_val(str);
    return (enviro);
}

env_t *create_env(env_t *enviro, char **env)
{
    int i = 0;

    while (env[i] != NULL) {
        enviro = assign_env(enviro, env[i], i);
        i++;
    }
    enviro[i].name = NULL;
    enviro[i].value = NULL;
    return (enviro);
}