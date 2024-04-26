# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 13:21:27 by folim             #+#    #+#              #
#    Updated: 2024/04/23 13:21:28 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= Account
COMPILE:= c++
CPPFLAGS:= -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98

SRC_FILES:= Account.cpp tests.cpp

OBJ_FILES:= $(SRC_FILES:.cpp=.o)
RM:= rm -rf

all: $(NAME) $(DIR_OBJ)

$(NAME): $(OBJ_FILES)
	$(COMPILE) $(OBJ_FILES) $(CPPFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
