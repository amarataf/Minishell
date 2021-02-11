/*
** EPITECH PROJECT, 2021
** find paths
** File description:
** fins if path exists
*/

#include "libmy.h"

int is_checko(char w)
{
    if (w != ':' && w != '\0' && w != '\n')
        return (1);
    else
        return (0);
}

int count_wo(char *str)
{
    int i = 0;
    int w = 0;

    while (str[i] != '\0') {
        if (is_checko(str[i]) == 1 && is_checko(str[i + 1]) == 0)
            w++;
        i++;
    }
    return (w);
}

int len_of_wordo(char *str, int i)
{
    int len_of = 0;

    while (is_checko(str[i]) == 1) {
        i++;
        len_of++;
    }
    return (len_of);
}

char **my_path(char *str)
{
    char **result = malloc(sizeof(char *) * (count_wo(str) + 1));
    int a = 0;
    int b = 0;
    int c = 0;

    if (result == NULL)
        return (NULL);
    while (b <= (count_wo(str) - 1)) {
        c = 0;
        while (is_checko(str[a]) == 0)
            a++;
        result[b] = my_malloc(len_of_wordo(str, a) + 1);
        while (is_checko(str[a]) == 1) {
            result[b][c++] = str[a];
            a++;
        }
        b++;
    }
    result[b] = NULL;
    return (result);
}