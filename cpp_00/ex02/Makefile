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

NAME:= log
COMPILE:= c++
CPPFLAGS:= -Wall -Wextra -Werror -g3 -fsanitize=address #-std=c++98

SRC_FILES:= Account.cpp tests.cpp
# DIR_SRC:= src
# SRCS := $(addprefix $(DIR_SRC)/, $(SRC_FILES))

# DIR_OBJ:= obj
OBJ_FILES:= $(SRC_FILES:.cpp=.o)
# OBJS:= $(addprefix $(DIR_OBJ)/, $(OBJ_FILES))
RM:= rm -rf

all: $(NAME) $(DIR_OBJ)

$(NAME): $(OBJ_FILES)
	$(COMPILE) $(OBJ_FILES) $(CPPFLAGS) -o $(NAME)

# $(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp | $(DIR_OBJ)
# 	$(COMPILE) $(CPPFLAGS) -c $< -o $@

# $(DIR_OBJ):
# 	mkdir -p $(DIR_OBJ)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
