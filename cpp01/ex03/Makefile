# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 08:33:24 by mmanouze          #+#    #+#              #
#    Updated: 2022/10/10 08:38:33 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = weapon
Cc = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp \

all : $(Name)

$(Name) : $(SRCS)
	$(Cc) $(CFLAGS) $(SRCS) -o $(Name)

fclean :
	rm -rf $(Name)

re : fclean all

.PHONY : all fclean re
