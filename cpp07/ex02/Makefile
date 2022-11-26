# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 22:34:55 by mmanouze          #+#    #+#              #
#    Updated: 2022/11/22 12:24:41 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

SRC = main.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

fclean :
	$(RM) $(NAME)

re : fclean all