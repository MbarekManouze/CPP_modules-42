# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:19:05 by mmanouze          #+#    #+#              #
#    Updated: 2022/11/23 17:19:23 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

RM = rm -rf

SRC = main.cpp Span.cpp

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

fclean :
	$(RM) $(NAME)

re : fclean all