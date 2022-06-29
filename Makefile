##
## EPITECH PROJECT, 2021
## task01
## File description:
## tsk01
##

all:
		make -C solver
		make -C generator

clean :
	rm -f $(OBJ)

fclean:         clean
	rm -f $(NAME)

re: 	fclean all
