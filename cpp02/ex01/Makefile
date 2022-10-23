# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 12:46:25 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/16 12:46:53 by mmanouze         ###   ########.fr        #
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

re : all fclean

.PHONY : all re fclean