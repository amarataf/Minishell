/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** calculate if number is prime
*/

int  my_is_prime(int nb)
{
    int numbrs = 2;

    if (nb <= 1) {
        return (0);
    }
    while (nb % numbrs > 0) {
        numbrs++;
        if (numbrs == nb) {
            return (1);
        }
    }
    return (0);
}
