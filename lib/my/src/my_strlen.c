/*
** EPITECH PROJECT, 2020
** mr_strlen
** File description:
** count n of characters
*/

int my_strlen(char *str)
{
    int ch = 0;

    while (str[ch] != '\0') {
        ch++;
    }
    return (ch);
}
