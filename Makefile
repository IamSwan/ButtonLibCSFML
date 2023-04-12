##
## EPITECH PROJECT, 2023
## ButtonLibCSFML
## File description:
## Makefile
##

FLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system

SRC = 	source/button.c\
		main.c

NAME = buttontest

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(FLAGS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
