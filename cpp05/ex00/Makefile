# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 16:52:27 by mmanouze          #+#    #+#              #
#    Updated: 2022/11/10 12:32:09 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exception

CC = c++

RM = rm -rf

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

fclean :
	$(RM) $(NAME)

re : fclean all