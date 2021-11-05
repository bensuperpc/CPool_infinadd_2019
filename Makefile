##
## EPITECH PROJECT, 2019
## CPool_Day12_2019
## File description:
## Makefile
##

SRC	=	main.c		\
		infin_add.c	\

CC	=	gcc

OBJ	=	$(SRC:%.c=%.o)

NAME =		infin_add

CFLAGS = 	-W -Wall -pipe -I include/

CFLAGSDEBUG = 	-Og -g3 -Q -v

LIB = 		-L lib/my/ -lmy

all: $(OBJ)
	$(MAKE) -C lib/my/
	$(CC) $(OBJ) -o $(NAME) $(LIB)


debug:  $(OBJ)
	$(MAKE) -C lib/my/ re
	$(CC) $(OBJ) -o $(NAME) $(CFLAGSDEBUG) $(LIB)
	gdb ./$(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re:	clean all
