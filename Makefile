##
## EPITECH PROJECT, 2023
## ButtonLib
## File description:
## Makefile
##

SRC = source/button.c

OBJ = $(SRC:.c=.o)

NAME = libbutton.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
