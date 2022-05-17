# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 09:15:01 by rkaufman          #+#    #+#              #
#    Updated: 2022/05/16 11:27:53 by rkaufman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	a.out

CC			:=	c++

SRCS		:=	main.cpp \
				Fixed.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@
	
clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

val:
	valgrind --leak-check=full -s ./$(NAME)

leak:
	leaks --atExit -- ./$(NAME)

.PHONY: clean fclean re
