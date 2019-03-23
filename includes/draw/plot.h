/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:51:56 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:02:23 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLOT_H
#define PLOT_H
#include <math.h>
#include <mlx.h>
#include "map/point.h"
#include "map/line.h"
#include "draw/rgba.h"
#include "core/fdf.h"

void	plot(t_fdf *fdf, t_line *l, int clr);
#endif
