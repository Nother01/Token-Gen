##
## EPITECH PROJECT, 2021
## LE-MIN
## File description:
## Makefile
##

RM	= rm -f

NAME	= key

SRC	=	$(wildcard *.c)	\
		$(wildcard src/*.c) \

OBJ	= $(SRC:.c=.o)

LIB		=	lib/my/

CFLAGS	+= -Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	@make -C $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIB) -lmy

clean:
	@make -C $(LIB) fclean
	rm -f $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(wildcard lib/*.gcno)
	$(RM) $(wildcard lib/*.gcda)
	$(RM) $(wildcard tests/*.gcno)
	$(RM) $(wildcard tests/*.gcda)
	$(RM) $(wildcard vgcore*)
	make -C tests fclean

re:	fclean all

tests_run:
	make -C tests all

.PHONY: all clean fclean re tests_run
