/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_plot.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:56:02 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:20:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_PLOT_H
#define DRAW_PLOT_H
#include <math.h>
#include <mlx.h>
#include "map/map_point.h"
#include "map/map_line.h"
#include "draw/draw_rgba.h"
#include "core/core_fdf.h"

void	plot(t_fdf *fdf, t_line l, int clr);
#endif
