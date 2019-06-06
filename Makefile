# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: copinto- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 22:32:04 by copinto-          #+#    #+#              #
#    Updated: 2019/06/05 23:16:47 by copinto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
HEAD    = libft.h

SRCS    =  ft_*.c
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
