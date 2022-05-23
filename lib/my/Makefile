##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

LIB	=	libmy.a

SRC		=	$(wildcard *.c)	\

OBJ		=	$(SRC:.c=.o)

all:	$(LIB)

$(LIB):	$(OBJ)
		@gcc -c $(SRC)
		@ar rc $(LIB) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		@rm -f $(LIB)

re:		fclean all
