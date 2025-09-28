SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp
SRC_FILES = $(addprefix src/, $(SRC))

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

CXX = c++ -Wall -Wextra -Werror -std=c++98 -Iinc
NAME = bsp

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	$(CXX) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)


fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
