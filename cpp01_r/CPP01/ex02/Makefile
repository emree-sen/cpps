NAME=Zombie
SRC=main.cpp
OBJ=$(SRC:.cpp=.o)
FLAGS=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all