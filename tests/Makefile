##
## EPITECH PROJECT, 2019
## CPool_Day12_2019
## File description:
## Makefile
##

SRC	=	../infin_add.c	\
		test_infinadd.c

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

NAME = 		infinadd

CFLAGS = 	-W -Wall -pipe -g -O0 -I ../include/

CFLAGSDEBUG = 	-Og -g3 -Q -v $(CFLAGS)

LIB = 		-L ../lib/my/ -lmy

all: $(OBJ)
	$(MAKE) -C ../lib/my/
	$(CC) $(OBJ) -lcriterion -o $(NAME) $(LIB)

debug:  $(OBJ)
	$(MAKE) -C ../lib/my/
	$(CC) $(OBJ) -lcriterion -o $(NAME) $(CFLAGSDEBUG)
	gdb ./$(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) ../$(NAME)

re:	clean all

tests_run: $(OBJ)
	$(MAKE) -C ../lib/my/
	$(CC) $(OBJ) -lcriterion -o $(NAME) $(LIB)
	./$(NAME)

