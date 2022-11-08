# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:32:00 by mmanouze          #+#    #+#              #
#    Updated: 2022/11/08 22:33:28 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymor
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

all : $(NAME)

$(NAME):$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)	-o $(NAME)

fclean : 
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean re