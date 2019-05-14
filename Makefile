# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copinto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 22:32:04 by copinto-          #+#    #+#              #
#    Updated: 2019/05/01 14:42:19 by copinto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lift.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
INCLUDES = ./includes/*.h
CFILES = ./srcs/ft_memset.c\
		 ./srcs/ft_bzero.c\
		 ./srcs/memcpy.c\
		 ./srcs/ft_memccpy.c\
		 ./srcs/ft_memmove.c\
		 ./srcs/ft_memchr.c\
		 ./srcs/ft_memcmp.c\
		 ./srcs/ft_strlen.c\
		 ./srcs/ft_strdup.c\
		 ./srcs/ft_strcpy.c\
		 ./srcs/ft_strrchr.c\
		 ./srcs/ft_strstr.c\
		 ./srcs/ft_strnstr.c\
		 ./srcs/ft_strcmp.c\
		 ./srcs/ft_strncmp.c\
		 ./srcs/ft_atoi.c\
		 ./srcs/ft_isalpha.c\
		 ./srcs/ft_isdigit.c\
		 ./srcs/ft_isalnum.c\
		 ./srcs/ft_isascii.c\
		 ./srcs/ft_isprint.c\
		 ./srcs/ft_toupper.c\
		 ./srcs/ft_tolower.c\

OFILES = /srcs/ft_memset.o\
		 ./srcs/ft_bzero.\
		 ./srcs/memcpy.o\
		 ./srcs/ft_memccpy.o\
		 ./srcs/ft_memmove.o\
		 ./srcs/ft_memchr.o\
		 ./srcs/ft_memcmp.o\
		 ./srcs/ft_strlen.o\
		 ./srcs/ft_strdup.o\
		 ./srcs/ft_strcpy.o\
		 ./srcs/ft_strrchr.o\
		 ./srcs/ft_strstr.o\
		 ./srcs/ft_strnstr.o\
		 ./srcs/ft_strcmp.o\
		 ./srcs/ft_strncmp.o\
		 ./srcs/ft_atoi.o\
		 ./srcs/ft_isalpha.o\
		 ./srcs/ft_isdigit.o\
		 ./srcs/ft_isalnum.o\
		 ./srcs/ft_isascii.o\
		 ./srcs/ft_isprint.o\
		 ./srcs/ft_toupper.o\
		 ./srcs/ft_tolower.o\

all:
	@$(CC) $(CFLAGS) $(CFILES)
	@ar rc $(NAME) $(OFILES)

clean:
	@/bin/rm -f $(OFILES) $(NAME)

fclean: clean
	@/bin/rm  -f $(OFILES) $(NAME)

re: fclean all

.Phony: all, clean, fclean, re 
