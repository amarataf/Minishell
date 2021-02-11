/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** changes from string to number
*/

int my_getnbr(char const *str)
{
    int c = 0;
    int pom = 1;
    int num = 0;

    while (str[c] == '+' || str[c] == '-') {
        if (str[c] == '-')
            pom = pom * -1;
        c++;
    }
    while (str[c] != '\0') {
        if (str[c] >= '0' && str[c] <= '9') {
            num = num * 10;
            num = num + str[c] - '0';
            c++;
        } else {
            return (num * pom);
        }
    }
    return (num * pom);
}
