/*
** EPITECH PROJECT, 2020
** str_isalpha
** File description:
** see if alphs
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[count] != '\0')
        count++;
    count--;

    if (count == -1)
        return (1);

    while (str[i] != '\0') {
        if (str[i] > 122 || str[i] < 65 || (str[i] > 90 && str[i] < 97))
            return (0);
        else if (i == count)
            return (1);
        else
            i++;
    }
    return (0);
}
