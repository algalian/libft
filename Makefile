# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: algalian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 14:23:15 by algalian          #+#    #+#              #
#    Updated: 2023/01/30 14:23:17 by algalian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCS = *.c 

OBJ = *.o

all: $(NAME)

$(NAME): 
	$(CC)  $(FLAGS) $(SRCS)
	$(AR)  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
