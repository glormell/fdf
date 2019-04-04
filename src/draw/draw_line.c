/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:12:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 21:49:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_line.h"

void            draw_line(t_fdf *fdf, t_line3 l)
{
	t_line2c	c;
	t_color		g;

	l.s.z = l.s.z * fdf->canvas.zscale;
	l.e.z = l.e.z * fdf->canvas.zscale;
	c = line2c(proj(fdf, rotate(fdf, l.s)), proj(fdf, rotate(fdf, l.e)));
	g = color_gradient(fdf->appearance, 0);
	if ((l.s.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance,
			l.s.z / (fdf->map->depth.max * fdf->canvas.zscale));
	else if ((l.s.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance,
			-(l.s.z / (fdf->map->depth.min * fdf->canvas.zscale)));
	c.s = point2c(c.s.x * fdf->canvas.t.z + fdf->canvas.t.x,
		c.s.y * fdf->canvas.t.z + fdf->canvas.t.y, g);
	g = color_gradient(fdf->appearance, 0);
	if ((l.e.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance,
			l.e.z / (fdf->map->depth.max * fdf->canvas.zscale));
	else if ((l.e.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance,
			-(l.e.z / (fdf->map->depth.min * fdf->canvas.zscale)));
	c.e = point2c(c.e.x * fdf->canvas.t.z + fdf->canvas.t.x,
		c.e.y * fdf->canvas.t.z + fdf->canvas.t.y, g);
	plot(fdf, c);
}
