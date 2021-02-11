/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap numbers
*/

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *b;
    *b = *a;
    *a = c;
}
