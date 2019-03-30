/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_rotate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:02:29 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 19:22:22 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_ROTATE_H
#define HOOK_ROTATE_H
#include <stdlib.h>
#include "core/t_fdf.h"
#include "color/color.h"
#include "map/map_point.h"
#include "draw/draw_center.h"

int		rotate_hook(t_point3 p, void *param);
int		shift_left_hook(void *param);
int		shift_right_hook(void *param);
int		shift_top_hook(void *param);
int		shift_bottom_hook(void *param);

#endif
