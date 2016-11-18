# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 21:06:34 by kacoulib          #+#    #+#              #
#    Updated: 2016/11/18 11:59:57 by kacoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a
HEADERS	= ../libft.h
SOURCES =   ../ft_*

SOURCE	= ./bin/make
FLAGS	= -Wall -Werror -Wextra

all :
	gcc $(FLAGS) $(HEADERS) $(SOURCES) main.c
clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)
re : fclean all
