# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 23:02:18 by tshimoda          #+#    #+#              #
#    Updated: 2022/06/06 12:02:49 by tshimoda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= PhoneBook

CCPP= clang++

CFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

SRCS= main.cpp PhoneBook.cpp PhoneBook.hpp

OBJS= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CCPP) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32mPiscineCPP_module00_ex00\n\033[0m"
	
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean
