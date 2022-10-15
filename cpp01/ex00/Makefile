# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 09:39:16 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/12 10:56:48 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean re