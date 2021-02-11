/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy the string
*/

char *my_strcpy(char *dest , char  const *src)
{
    int position = 0;

    while (src[position] != '\0') {
        dest[position] = src[position];
        position++;
    }
    dest[position] = '\0';
    return (dest);
}
