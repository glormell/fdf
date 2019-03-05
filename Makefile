# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glormell <glormell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 20:08:21 by glormell          #+#    #+#              #
#    Updated: 2019/03/03 20:20:38 by glormell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CFILES = src/*.c

OFILES = $(CFILES:.c=.o)

SRC = $(CFILES)

OBJS = $(OFILES)

INCLUDE = includes

LIB = . -lm -lft -lmlx

FRAMEWORKS = -framework OpenGL -framework AppKit

CFLAGS = #-Wall -Wextra -Werror

$(NAME):
	gcc $(CFLAGS) $(CFILES) -o $(NAME) -I $(INCLUDE) -L $(LIB) $(FRAMEWORKS)

all: $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
