#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 16:08:14 by gmelisan          #+#    #+#              #
#    Updated: 2018/09/06 16:10:26 by gmelisan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
SRC = ./main.c ./display.c ./display_file.c
OBJ = ./main.o ./display.o ./display_file.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
