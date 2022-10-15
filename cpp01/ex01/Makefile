# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 18:51:44 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/11 18:41:27 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SRCS = main.cpp Zombie.cpp zombieHorde.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean re