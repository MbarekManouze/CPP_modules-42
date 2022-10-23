# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 08:34:08 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/23 13:21:48 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = Fixed
Cc = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Fixed.cpp

all : $(Name)

$(Name) : $(SRCS)
	$(Cc) $(CFLAGS) $(SRCS) -o $(Name)

fclean :
	rm -rf $(Name)

re : fclean all

.PHONY : all re fclean