NAME = fragtrap
HEADER_FILES = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = g++
CPP_FLAGS = -Wall -Wextra -Werror --std=c++98

all: $(NAME)

%.o: %.cpp $(HEADER_FILES)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	$(CPP) $(OBJ_FILES) -o $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all norme clean fclean re

