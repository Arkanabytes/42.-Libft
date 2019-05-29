# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copinto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 22:32:04 by copinto-          #+#    #+#              #
#    Updated: 2019/05/29 01:32:24 by copinto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
HEAD    = libft.h

SRCS    = ft_bzero.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strnequ.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strnew.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_toupper.c

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
clean:
	@rm -f $(OBJECTS)
	@echo "[INFO] Objects removed!"
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Library [$(NAME)] removed!"
re:	fclean all
.PHONY: all, clean, fclean, re