#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 17:03:12 by gmelisan          #+#    #+#              #
#    Updated: 2018/09/12 20:27:58 by gmelisan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq

FLAGS = -Wall -Wextra -Werror
INC_DIR = ./include
SRC = ./src/main.c ./src/preparation.c ./src/display.c ./src/read_map.c \
		./src/solve.c ./src/ft_atoi.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(INC_DIR) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
