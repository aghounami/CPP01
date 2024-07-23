NAME = Unnecessary

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
src = main.cpp  Weapon.cpp HumanA.cpp HumanB.cpp
obj = $(src:.cpp=.o)

all: $(NAME) clean

$(NAME): $(obj)
	$(CC) $(CFLAGS) $(obj) -o $(NAME) 

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re