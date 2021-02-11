/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compares arrays
*/

int compare_numbers(char *s1, char *s2)
{
    int mesure_one = 0;
    int mesure_two = 0;

    while (s1[mesure_one] != '\0')
        mesure_one++;
    while (s2[mesure_two] != '\0')
        mesure_two++;
    if (mesure_one > mesure_two)
        mesure_one = mesure_two;
    return (mesure_one);
}

int my_strcmp(char *s1, char *s2)
{
    int position = 0;
    int ret = 0;
    int bigger_number = 0;

    bigger_number = compare_numbers(s1, s2);
    while (position <= bigger_number) {
        if (s1[position] != s2[position]) {
            ret = s1[position] - s2[position];
            return (ret);
        }
        position++;
    }
    return (ret);
}
