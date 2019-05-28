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
SRCS    = ft_putchar_fd.c \ ft_putchar.c \ ft_putnbr.c \ ft_putnbr_fd.c \ ft_atoi.c \
OBJS    = $(SRCS:.c=.o)

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rc
RANLIB  = ranlib

HEAD    = libft.h

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