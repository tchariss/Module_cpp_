# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 00:23:32 by tchariss          #+#    #+#              #
#    Updated: 2021/08/05 14:44:23 by tchariss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp

HEADER = phonebook.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
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