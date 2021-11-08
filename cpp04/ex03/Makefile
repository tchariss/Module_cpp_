
NAME = Abstract_class

SRCS = main.cpp AMateria.cpp MateriaSource.cpp Character.cpp Cure.cpp Ice.cpp
	
HEADER = MateriaSource.hpp Character.hpp Cure.hpp Ice.hpp \ 
			ICharacter.hpp IMateriaSource.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -g -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp Makefile $(HEADERS)
	clang++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	clang++ $(FLAGS) -o $(NAME) $(OBJS) -I./

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
