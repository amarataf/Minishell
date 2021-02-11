/*
** EPITECH PROJECT, 2020
** str_isupper
** File description:
** check if is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[count] != '\0')
        count++;
    count--;

    if (count == -1)
        return (1);

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90)
            return (0);
        else if (i == count)
            return (1);
        else
            i++;
    }
    return (0);
}
