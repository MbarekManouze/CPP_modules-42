# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:09:14 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/09 09:42:07 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp 

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean re