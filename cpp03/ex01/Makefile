# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 15:38:01 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/30 22:12:12 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = ScavTrap.cpp ClapTrap.cpp main.cpp

all : $(NAME)

$(NAME):$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)	-o $(NAME)

fclean :
	rm $(NAME)

re : fclean all

.PHONY : all fclean rm