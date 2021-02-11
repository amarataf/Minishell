/*
** EPITECH PROJECT, 2020
** my
** File description:
** header file
*/

#ifndef MINI_H_
#define MINI_H_

#include "libmy.h"
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct env_s {
    char *name;
    char *value;
} env_t;

env_t *create_env(env_t *, char **);
void print_env(env_t *, int);
env_t *set_env(env_t *, char **, int);
env_t *unset_env(env_t *, char **, int);
int move_cd(char **, int, env_t *);
char **my_path(char *);
int main_loop(int, char **, char **);
void do_func(char **, env_t *, int);
int is_function(char **, env_t *, int);
int do_command(char **, char *);
env_t *if_exit(char *, char **, env_t *);
env_t *env_hand(char *, env_t *);
int do_cd(char **, int, env_t *);
int cd_home(char **, env_t *);

#endif
