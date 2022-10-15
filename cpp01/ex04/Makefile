# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 08:54:04 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/10 10:20:13 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = replace
Cc = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp

all : $(Name)

$(Name) : $(SRCS)
	$(Cc) $(CFLAGS) $(SRCS) -o $(Name)

fclean :
	rm -rf $(Name)

re : all fclean

.PHONY : all re fclean