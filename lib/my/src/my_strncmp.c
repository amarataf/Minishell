/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** 0 or 32 or -32 numbers
*/

int  my_strncmp(char  const *s1 , char  const *s2, int n)
{
    int p = 0;

    while (s1[p] == s2[p] && s1[p] && s2[p] && p < n)
        p++;
    if ((s1[p] == '\0' && s2[p] == '\0') || p == n)
        return (0);
    if (s1[p] > s2[p])
        return (32);
    else
        return (-32);
}
