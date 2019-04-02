# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glormell <glormell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 20:08:21 by glormell          #+#    #+#              #
#    Updated: 2019/04/02 23:25:56 by glormell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

MAKE = make
CC = gcc
COPT = 
CFLAGS = #-Wall -Wextra -Werror

CFILES = src/color/color_convert.c \
src/color/color_gradient.c \
src/color/color_palette.c \
src/color/color_rgba.c \
src/core/core_appearance.c \
src/core/core_clear.c \
src/core/core_fdf.c \
src/core/core_error.c \
src/core/core_image.c \
src/core/core_window.c \
src/draw/draw_center.c \
src/draw/draw_iso.c \
src/draw/draw_line.c \
src/draw/draw_map.c \
src/draw/draw_plot.c \
src/draw/draw_proj.c \
src/draw/draw_rotate.c \
src/hook/hook.c \
src/hook/hook_arrows.c \
src/hook/hook_close.c \
src/hook/hook_keys.c \
src/hook/hook_mouse.c \
src/hook/hook_rotate.c \
src/hook/hook_translate.c \
src/hook/hook_zoom.c \
src/input/get_next_line.c \
src/input/input_map.c \
src/map/map.c \
src/map/map_line.c \
src/map/map_point.c \
src/main.c
OFILES = $(CFILES:%.c=%.o)

LIBPATH = libs/

FT = ft
LFTPATH = $(addprefix $(LIBPATH), $(FT))/
LFT = $(addprefix  lib, $(addsuffix .a, $(FT)))
LIBFT = -L$(LFTPATH) -l$(FT)
MKFT = $(MAKE) -C $(LFTPATH)

MLX = mlx
LMLXPATH = $(addprefix $(LIBPATH), $(MLX))/
LMLX = $(addprefix  lib, $(addsuffix .a, $(MLX)))
LIBMLX = -L$(LMLXPATH) -l$(MLX)
MKMLX = $(MAKE) -C $(LMLXPATH)

SRC = $(CFILES)
OBJS = $(OFILES)

INCPATH = includes/
INCLUDES = -I$(LFTPATH) -I$(LMLXPATH) -I$(INCPATH)
LIB = -lm $(LIBFT) $(LIBMLX)

FRAMEWORKS = -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(LFT) $(LMLX) $(OFILES)
	$(CC) $(COPT) -o $(NAME) $(INCLUDE) $(LIB) $(FRAMEWORKS) $(OFILES)
	-@echo "\nMars is waiting for you, sir."

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $(INCLUDES) -c $<

$(LFT):
	$(MKFT)

$(LMLX):
	$(MKMLX)

clean:
	$(MKFT) clean
	$(MKMLX) clean
	rm -f $(OFILES)

fclean: clean
	$(MKFT) fclean
	rm -f $(NAME)

re: fclean all
