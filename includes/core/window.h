/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:02:10 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:43:36 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
#define WINDOW_H
#include <stdlib.h>
#include <mlx.h>
#include "core/t_fdf.h"
#include "keyboard/close.h"
#include "keyboard/translate.h"

int		key_hook(int key, void *param);
int		win_init(t_fdf *fdf, int width, int height, char *title);

#endif
