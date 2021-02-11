/*
** EPITECH PROJECT, 2020
** my_malloc
** File description:
** fill spaces with \0
*/

#include <stdlib.h>

char *my_malloc(int x)
{
    char *arr = malloc(sizeof(char) * x);
    int i = 0;

    if (arr == NULL)
        return (NULL);
    while (i < x) {
        arr[i] = '\0';
        i++;
    }
    return (arr);
}
