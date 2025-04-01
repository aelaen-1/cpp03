NAME = prog
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -Wno-shadow -Wshadow

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean all re