##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	$(shell find . -name '*.c')

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

INCLUDE =	-I -my.h

NAME	=	libmy.a

CFLAGS	= 	$(INCLUDE) -W -Wall -Wextra -Wshadow -O2 -pipe -march=native

all: $(OBJ)
	ar r $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)


fclean:
	rm -f $(NAME) ../$(NAME)

re:	clean all
