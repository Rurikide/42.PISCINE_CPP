# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 23:02:18 by tshimoda          #+#    #+#              #
#    Updated: 2022/06/14 09:32:21 by tshimoda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

#g++ is for Linux???
CCPP= clang++

CFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

SRCS= megaphone.cpp

OBJS= $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CCPP) $(CFLAGS) $(OBJS) -o $(NAME)
	
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all
