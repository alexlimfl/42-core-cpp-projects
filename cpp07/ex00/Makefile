# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 11:24:09 by folim             #+#    #+#              #
#    Updated: 2024/07/29 11:24:10 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= whatever
COMPILE:= c++
CPPFLAGS:= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

SRC_FILES:= main.cpp
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

