CC		:= c++
CFLAGS	:= -Wall -Wextra -Werror
COPTS	:= -std=c++98 -pedantic

NAME	:= a.out
SRCS	:= main.cpp
OBJS	:= $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(COPTS) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(COPTS) -o $@ -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
