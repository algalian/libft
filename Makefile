/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:28:25 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 13:28:29 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

SOURCE = $(wildcard *.c)

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
