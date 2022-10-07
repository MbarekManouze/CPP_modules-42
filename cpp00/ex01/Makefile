# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 16:08:35 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/07 11:05:33 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = phonebook.cpp \

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : clean all fclean re bonus