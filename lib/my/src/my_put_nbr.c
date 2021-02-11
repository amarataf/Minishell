/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** put a number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int percent = 0;

    if (nb < 0 ) {
        my_putchar('-');
        nb = nb * - 1;
    }

    if (nb >= 10) {
        percent = (nb % 10);
        nb = (nb - percent) / 10;
        my_put_nbr(nb);
        my_putchar(48 + percent);
    } else
        my_putchar(48 + nb % 10);

    return (0);
}
