##
## EPITECH PROJECT, 2022
## math project
## File description:
## math project
##

SRC	=	my_101pong.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -lm

clean:	$(OBJ)
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
