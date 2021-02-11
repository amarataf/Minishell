/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find a string inside a string
*/

char *my_strstr(char *str , char  const *to_find)
{
    int position = 0;
    int num_max = 0;

    while (str[num_max] != '\0')
        num_max++;
    while (to_find[position] != '\0') {
        if (str[position] == str[num_max] && to_find[0] != str[position]) {
            return ('\0');
        }
        if (to_find[position] != str[position])
            return (my_strstr((str + 1), to_find));
        position++;
    }
        return (str);
}
