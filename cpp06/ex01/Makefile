NAME = Serialization

SRCS = main.cpp 

OBJS = $(SRCS:.cpp=.o)

FLAGS = -g -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS) 

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re