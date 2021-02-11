/*
** EPITECH PROJECT, 2020
** str_isprintable
** File description:
** check if is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[count] != '\0')
        count++;
    count--;

    if (count == -1)
        return (1);

    while (str[i] != '\0') {
        if (str[i] < 32)
            return (0);
        else if (i == count)
            return (1);
        else
            i++;
    }
    return (0);
}
