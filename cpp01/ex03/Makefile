NAME = unnecessary_violence
HEADER_FILES = Weapon.hpp HumanA.hpp HumanB.hpp
SRC_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror --std=c++98
DEPENDENCIES = $(HEADER_FILES) Makefile

all: $(NAME)

%.o: %.cpp $(DEPENDENCIES)
	$(CPP) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ_FILES)
	$(CPP) $(OBJ_FILES) -o $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all norme clean fclean re

