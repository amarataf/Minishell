/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** paste two strings up to a nbr
*/

int my_strlen(char const *str);

char *my_strncat(char *dest , char  const *src, int nb)
{
    int max = 0;
    int position_max = 0;

    max = my_strlen(dest);
    while (src[position_max] != src[nb]) {
        dest[max + position_max] = src[position_max];
        position_max++;
    }
    return (dest);
}
