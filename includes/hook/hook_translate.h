/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:03:15 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:03:28 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_TRANSLATE_H
#define HOOK_TRANSLATE_H
#include <stdlib.h>
#include "core/t_fdf.h"
#include "map/map_point.h"
#include "draw/draw_rgba.h"

int		translate_hook(t_point3 p, void *param);
int		left_hook(void *param);
int		right_hook(void *param);
int		top_hook(void *param);
int		bottom_hook(void *param);

#endif
