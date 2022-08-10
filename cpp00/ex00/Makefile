NAME = megaphone
SRC_FILES = megaphone.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)
CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror --std=c++98
DEPENDENCIES = Makefile

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

