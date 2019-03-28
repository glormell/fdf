/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 22:55:52 by glormell          #+#    #+#             */
/*   Updated: 2019/03/27 15:16:56 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_MAP_H
#define DRAW_MAP_H
#include "core/t_fdf.h"
#include "core/fdf.h"
#include "map/point.h"
#include "draw/rotate.h"
#include "draw/line.h"

void	draw_map(void *param, int clr);
#endif
