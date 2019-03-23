/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:52 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:01:04 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_LINE_H
#define DRAW_LINE_H
#include <mlx.h>
#include "map/point.h"
#include "map/line.h"
#include "core/fdf.h"
#include "draw/iso.h"
#include "draw/proj.h"
#include "draw/rgba.h"
#include "draw/plot.h"

t_point2	*convert(t_point3 *point, t_point3 *camera, t_point3 *rotate);
void		draw_line(t_fdf *fdf, t_line *l, int clr);
#endif
