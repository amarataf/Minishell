/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverses a string
*/

char *my_revstr(char *str)
{
    int position_min = 0;
    int position_max = 0;
    char save;

    while (str[position_max] != '\0') {
        position_max++;
    }
    position_max--;
    while (position_min < position_max) {
        save = str[position_min];
        str[position_min] = str[position_max];
        str[position_max] = save;
        position_min++;
        position_max--;
    }
    return (str);
}
