NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	c++ $(FLAGS) $(SRC) -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.phony: all, clean, fclean