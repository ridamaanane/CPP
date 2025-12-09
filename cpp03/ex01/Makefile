CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ScavTrap
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re