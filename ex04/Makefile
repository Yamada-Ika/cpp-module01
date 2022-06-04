CC			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror
COPTS		:= -std=c++98 -pedantic-errors
INCLUDE		:= -I src

NAME	:= sed
SRCS	:= main.cpp Sed.cpp
OBJS	:= $(SRCS:%.cpp=%.o)
SRCS	:= $(addprefix src/, $(SRCS))
OBJS	:= $(addprefix obj/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(CXXFLAGS) $(COPTS) $(INCLUDE) $(OBJS)

obj/%.o: src/%.cpp
	$(CC) $(CXXFLAGS) $(COPTS) $(INCLUDE) -o $@ -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: SHELL := /bin/bash
run: all
	@echo "aaaahogebbbbhogecccchoge" > test.file
	./sed test.file hoge fuga
	@diff test.file.replace <(cat test.file | sed -e 's/hoge/fuga/g')
	@rm -rf test.file
	@rm -rf test.file.replace

error: all
	touch error1.file
	chmod 000 error1.file
	-./sed error1.file hoge fuga
	mkdir error2
	-./sed error2 hoge fuga
	@rm -rf error1.file
	@rm -rf error2

.PHONY: all clean fclean re
