##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile of infinadd
##

NAME	=	mysh

SRC	=	src/main.c 			\
		src/main_loop.c		\
		src/create_env.c	\
		src/print_env.c		\
		src/set_env.c		\
		src/unset_env.c		\
		src/move_cd.c		\
		src/my_path.c		\
		src/do_func.c		\
		src/is_function.c	\
		src/do_command.c	\
		src/exit.c			\
		src/cd.c			\
		src/cd_home.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/ -pedantic -g3 #-Wpedantic -Wno-long-long -Werror -W -Wall -Wextra

LDLIBS	=	-L./lib/ -lmy

all:		$(NAME)

$(NAME):	make_lib $(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LDLIBS)

make_lib:
		$(MAKE) -C lib/my

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C lib/my/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C lib/my

run_tests:

re:		fclean all
		$(MAKE) re -C lib/my
