# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 19:41:11 by mmanouze          #+#    #+#              #
#    Updated: 2022/11/19 19:41:39 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

SRC = Identify.cpp 

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

fclean :
	$(RM) $(NAME)

re : fclean all