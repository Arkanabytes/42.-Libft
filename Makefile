# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copinto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 22:32:04 by copinto-          #+#    #+#              #
#    Updated: 2019/05/19 02:04:43 by copinto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

HEAD    = libft.h

SRCS    = ft_putchar_fd.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c\
		ft_memset.c\
		ft_putchar_fd.c \
		ft_putchar.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)
		@echo "[INFO] Library [$(NAME)] created!"

clean:
		@rm -f $(OBJS)
		@echo "[INFO] Objects removed!"

fclean: clean
		@rm -f $(NAME)
		@echo "[INFO] Library [$(NAME)] removed!"

re:		fclean all

.PHONY: all, clean, fclean, re