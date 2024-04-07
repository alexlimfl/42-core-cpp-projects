# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 21:22:33 by folim             #+#    #+#              #
#    Updated: 2024/04/07 23:48:10 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= megaphone
COMPILE:= c++
CPPFLAGS:= -Wall -Wextra -Werror -g3 -fsanitize=address -std=c++98
SRCS:= megaphone.cpp
OBJS:= $(SRCS:.cpp=.o)
RM:= rm -rf

all: $(NAME)

$(NAME): $(OBJS) 
	$(COMPILE) $(OBJS) -o $(NAME) $(CPPFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re