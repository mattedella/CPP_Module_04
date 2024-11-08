SRC = main.cpp src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp src/MaterialSource.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -f
NAME = Polymorphism

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "compiled $(NAME)"

%.o: %.cpp
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJ)
		@echo "removed object files"

fclean: clean
		@$(RM) $(NAME)
		@echo "removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re