# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tshimoda <tshimoda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 23:02:18 by tshimoda          #+#    #+#              #
#    Updated: 2022/07/01 17:43:08 by tshimoda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= SwapMinMax

CXX= clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

RM= rm -rf

ODIR= objs

SRCS= main.cpp

OBJS= $(addprefix $(ODIR)/, $(SRCS:.cpp=.o))

$(ODIR)/%.o: %.cpp
		$(CXX) $(CXXFLAGS) -I. -c $< -o $@

$(NAME): $(ODIR) $(OBJS)
		$(CXX) $(OBJS) -o $(NAME)

$(ODIR):
		mkdir -p $(ODIR)

all: $(NAME)

clean:
	$(RM) $(ODIR)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
