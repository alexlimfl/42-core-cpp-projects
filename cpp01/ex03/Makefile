# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 23:19:27 by folim             #+#    #+#              #
#    Updated: 2024/04/26 23:19:28 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= Zombie
COMPILE:= c++
CPPFLAGS:= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

SRC_FILES:= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
DIR_SRC:= src
SRCS := $(addprefix $(DIR_SRC)/, $(SRC_FILES))

DIR_OBJ:= obj
OBJ_FILES:= $(SRC_FILES:.cpp=.o)
OBJS:= $(addprefix $(DIR_OBJ)/, $(OBJ_FILES))
RM:= rm -rf

all: $(NAME) $(DIR_OBJ)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) $(CPPFLAGS) -o $(NAME)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp | $(DIR_OBJ)
	$(COMPILE) $(CPPFLAGS) -c $< -o $@

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)

clean:
	$(RM) $(DIR_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
