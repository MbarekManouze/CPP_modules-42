# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 14:44:55 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/30 22:12:07 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = ClapTrap.cpp main.cpp

all : $(NAME)

$(NAME):$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)	-o $(NAME)

fclean : 
	rm $(NAME)

re : fclean all

.PHONY : all fclean re
