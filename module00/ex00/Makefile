NAME= megaphone
RM= rm -rf

CCPP= g++
CFLAGS= -Wall -Wextra -Werror

SRCS= megaphone.cpp
OBJS= $(SRCS:.c=.0)

$(NAME):
	$(CCPP) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\033[1;32mPiscineCPP_module00_ex00\n\033[0m"
	
all: $(NAME)

#problem doesn;t make any changes

clean:
	$(RM) $(NAME)

# do I need fclean rule ???

re: clean all

.PHONY: all clean