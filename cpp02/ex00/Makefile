CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = Zombie
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