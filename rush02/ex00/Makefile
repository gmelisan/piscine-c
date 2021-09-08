# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmurch <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 12:11:27 by kmurch            #+#    #+#              #
#    Updated: 2018/09/09 16:12:16 by gmelisan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = colle-2

NAME0 = colle-00
NAME1 = colle-01
NAME2 = colle-02
NAME3 = colle-03
NAME4 = colle-04

FLAGS = -Wall -Wextra -Werror
INC_DIR = ./includes

SRC_COMMON = ./src/ft_atoi.c ./src/display.c ./src/list.c ./src/ft_putnbr.c \
			./src/ft_strcmp.c
SRC0 = ./rush00/main00.c ./rush00/rush00.c
SRC1 = ./rush00/main01.c ./rush00/rush01.c
SRC2 = ./rush00/main02.c ./rush00/rush02.c
SRC3 = ./rush00/main03.c ./rush00/rush03.c
SRC4 = ./rush00/main04.c ./rush00/rush04.c
SRC  = ./src/main.c ./rush00/rush00.c ./rush00/rush01.c ./rush00/rush02.c \
		./rush00/rush03.c ./rush00/rush04.c ./src/compare_str.c

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME0) $(SRC_COMMON) $(SRC0)
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME1) $(SRC_COMMON) $(SRC1)
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME2) $(SRC_COMMON) $(SRC2)
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME3) $(SRC_COMMON) $(SRC3)
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME4) $(SRC_COMMON) $(SRC4)
	@gcc $(FLAGS) -I$(INC_DIR) -o $(NAME)  $(SRC_COMMON) $(SRC)


clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME)

re: fclean all

run:
	@echo "--------------"
	@echo "Subject tests:"
	@echo "--------------"
	./$(NAME0) 4 4
	./$(NAME0) 4 4 | ./$(NAME)
	./$(NAME1) 3 4 | ./$(NAME)
	./$(NAME2) 1 1
	./$(NAME3) 1 1
	./$(NAME4) 1 1
	./$(NAME2) 1 1 | ./$(NAME)
	@echo "-------------"
	@echo "Other test:"
	@echo "-------------"
	./$(NAME) "A" "B" "C"
	./$(NAME) "Ai-je une chance d'avoir plus de 0 ?"
	./$(NAME3) 50 50 | ./$(NAME)
	./$(NAME3) 461 25 | ./$(NAME)
