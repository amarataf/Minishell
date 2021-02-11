/*
** EPITECH PROJECT, 2020
** my
** File description:
** header file
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>

int show_error(int, int);
int my_count(char const*);
int compare_strings(char const*, char const*, int);
int my_count_two(char const*);
int count_long_string(char*, int);

void my_putchar(char);
int my_putstr(char*);
int my_put_nbr(int);

int my_strlen(char *);
char *my_strcpy(char *);
char *my_strncpy(char *);
char *my_revstr(char *);
char *my_strstr(char *, char const*);
int my_strcmp(char *, char *);
int my_strncmp(char const*, char const*, int);

char *my_strupcase(char*);
char *my_strlowcase(char*);
char *my_strcapitalize(char*);

char *my_strcat(char *, char *);
char *my_strncat(char*, char const*, int);

int my_str_isalpha(char const*);
int my_str_isnum(char const*);
int my_str_islower(char const*);
int my_str_isupper(char const*);
int my_str_isprintable(char const*);

void my_sort_int_array(int*, int);
int my_isneg(int);
void my_swap(int*, int*);
int my_find_prime_sup(int);
int my_is_prime(int);
int my_compute_square_root(int);
int my_compute_power_rec(int, int);
int my_getnbr(char const*);

char *my_strdup(char *);

char **my_str_to_word_array(char *);
int count_w(char *);
char *my_malloc(int);

#endif