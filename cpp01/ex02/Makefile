# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 18:56:28 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/09 18:57:03 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean re