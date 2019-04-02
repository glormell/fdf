# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glormell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 20:08:21 by glormell          #+#    #+#              #
#    Updated: 2018/11/28 05:07:00 by glormell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = *.c

OFILES = $(CFILES:.c=.o)

SRC = $(CFILES)

OBJS = $(OFILES)

TEST = tests/tests.c

INCLUDE = includes

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
