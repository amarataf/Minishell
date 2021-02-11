/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** paste two strs
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int max = 0;
    int position_max = 0;

    max = my_strlen(dest);
    while (src[position_max] != '\0') {
        dest[max + position_max] = src[position_max];
        position_max++;
    }
    return (dest);
}
