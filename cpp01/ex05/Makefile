# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 10:18:54 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/10 10:19:59 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = harl
Cc = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp

all : $(Name)

$(Name) : $(SRCS)
	$(Cc) $(CFLAGS) $(SRCS) -o $(Name)

fclean :
	rm -rf $(Name)

re : all fclean

.PHONY : all re fclean