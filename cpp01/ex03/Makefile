CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = Weapon
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.SECONDARY: $(OBJ)
.PHONY: all clean fclean re