/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** displays characters one by one
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int ch = 0;

    while (str[ch] != '\0') {
        my_putchar(str[ch]);
        ch++;
    }

    return (0);
}
