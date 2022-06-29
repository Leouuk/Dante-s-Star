##
## EPITECH PROJECT, 2021
## task01
## File description:
## tsk01
##

SRC	= 	source/main.c 		\
		source/load.c 		\
		source/sizefile.c 	\
		source/solve.c 		\
		source/my_puttab.c	\
		source/my_strlen.c 	\
		source/check.c


OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -g

CPPFLAGS += -Iinclude

CSFML = -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

NAME = solver

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean:         clean
	rm -f $(NAME)

re:
	make fclean
	make

.PHONY:
	make re clean fclean all tests_run