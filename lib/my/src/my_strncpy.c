/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** function that copies n characters
*/

char *my_strncpy(char *dest , char  const *src , int n)
{
    int position = 0;

    while (position < n) {
        dest[position] = src[position];
        position++;
    }
    return (dest);
}
