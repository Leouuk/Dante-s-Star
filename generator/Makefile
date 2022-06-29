##
## EPITECH PROJECT, 2021
## Makefile generator
## File description:
## generate binary w/ flags
##

SRC_MAIN	= 	main.c

OBJ_MAIN =	$(addprefix src/, $(SRC_MAIN:.c=.o))

SRC_ALGO	=	algo/dante.c					\
				algo/perfect.c

OBJ_ALGO	=	$(addprefix src/, $(SRC_ALGO:.c=.o))

SRC_MAP	=	map_handling/create_fill_map.c	\
			map_handling/print_map.c

OBJ_MAP	=	$(addprefix src/, $(SRC_MAP:.c=.o))

SRC_ERROR	=	error_handling/check_arg.c		\
				error_handling/check_return.c

OBJ_ERROR = $(addprefix src/, $(SRC_ERROR:.c=.o))

OBJ = $(OBJ_MAIN) $(OBJ_ERROR) $(OBJ_ALGO) $(OBJ_MAP)

LIBFLAGS	=	-L./lib/my -lmy

CPPFLAGS	=	-I./include

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LIBFLAGS)

clean:
	make clean -C ./lib/my
	$(RM) $(OBJ) $(OBJ_MAIN) $(OBJ_MAIN) $(OBJ_ERROR) $(OBJ_ALGO) $(OBJ_MAP)
	$(RM) *~ *#

fclean : clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all

debug: $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(SRC) $(CPPFLAGS) -Llib -lmy -W -Wall -Wextra -ggdb3

.PHONY: debug re fclean clean all
