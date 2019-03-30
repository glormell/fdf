/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_plot.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:56:02 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 19:11:05 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_PLOT_H
#define DRAW_PLOT_H
#include <math.h>
#include <mlx.h>
#include "core/t_fdf.h"
#include "color/t_color.h"
#include "color/color.h"
#include "map/map_point.h"
#include "map/map_line.h"

void	plot(t_fdf *fdf, t_line l, t_color clr);
#endif
