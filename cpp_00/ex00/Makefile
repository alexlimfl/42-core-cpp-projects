# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 21:22:33 by folim             #+#    #+#              #
#    Updated: 2024/04/07 22:45:18 by folim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: megaphone
CC: g++
CPPFLAGS: -Wall -Wextra -Werror
SRCS: megaphone.cpp
OBJS: $(SRCS: .cpp = .o)
RM = -rm -rf

all: $(NAME)

$(NAME):	$(OBJS) 
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re