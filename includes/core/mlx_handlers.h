/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_handlers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 01:50:24 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 01:55:27 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_HANDLERS_H
#define MLX_HANDLERS_H
#include <mlx.h>
#include "core/t_fdf.h"
#include "keyboard/codes/codes.h"
#include "keyboard/close.h"
#include "keyboard/translate.h"

int		key_hook(int key, void *param);
int		add_mlx_handlers(t_fdf *fdf);

#endif
