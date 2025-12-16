CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = Brain
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