# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 10:25:42 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/30 22:13:12 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ClapTrap.cpp FragTrap.cpp main.cpp ScavTrap.cpp


all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

fclean : 
	rm $(NAME)

re : fclean all

.PHONY : re fclean all