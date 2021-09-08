#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 19:18:08 by gmelisan          #+#    #+#              #
#    Updated: 2018/09/04 20:14:54 by gmelisan         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op
SRC = ./check_args.c ./ft_putchar.c ./ft_putstr.c ./main.c ./do_op.c ./ft_atoi.c ./ft_putnbr.c ./functions.c
OBJ = ./check_args.o ./ft_putchar.o ./ft_putstr.o ./main.o ./do_op.o ./ft_atoi.o ./ft_putnbr.o ./functions.o
INCL = ./
OPTIONS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(OPTIONS) -I$(INCL) -c $(SRC)
	gcc $(OPTIONS) -I$(INCL) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
