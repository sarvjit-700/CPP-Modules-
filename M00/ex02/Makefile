# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssukhija <ssukhija@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 12:19:33 by ssukhija          #+#    #+#              #
#    Updated: 2026/02/17 12:19:33 by ssukhija         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = account

#FLAGS
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#FILES
SRCS = tests.cpp Account.cpp 
OBJ = $(SRCS:.cpp=.o)

#RULES
all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	printf "Linking executable\n"

%.o:%.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	printf "clean objects\n"

fclean: clean
	$(RM) $(NAME)
	printf "cleaning executable file\n"

re: fclean all

.PHONY: all clean fclean re
