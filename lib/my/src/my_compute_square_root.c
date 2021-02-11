/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** calculate the square root
*/

int my_compute_square_root(int nb)
{
    int square = 0;

    if (nb <= 0) {
        return (0);
    }
    while (square * square != nb) {
        square++;
        if (square > nb) {
            return (0);
        }
    }
    return (square);
}
