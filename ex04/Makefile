NAME = sed
CC = c++
FLAGS = -std=c++98 -g -Wall -Wextra -Werror
SRC = main.cpp replace.cpp
OBJ = $(SRC:.cpp=.o)
REPLACE = *.replace

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(REPLACE)

re: fclean all
