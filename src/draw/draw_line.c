/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:12:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 23:14:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_line.h"

void			draw_line(t_fdf *fdf, t_line3 l)
{
	t_line2c	c;
	t_color		g;

	l.s.z = l.s.z * fdf->cvs.zscale;
	l.e.z = l.e.z * fdf->cvs.zscale;
	c = line2c(proj(fdf, rotate(fdf, l.s)), proj(fdf, rotate(fdf, l.e)));
	g = color_gradient(fdf->appearance, 0);
	if ((l.s.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance,
			l.s.z / (fdf->map->depth.max * fdf->cvs.zscale));
	else if ((l.s.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance,
			-(l.s.z / (fdf->map->depth.min * fdf->cvs.zscale)));
	c.s = point2c(c.s.x * fdf->cvs.t.z + fdf->cvs.t.x,
		c.s.y * fdf->cvs.t.z + fdf->cvs.t.y, g);
	g = color_gradient(fdf->appearance, 0);
	if ((l.e.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance,
			l.e.z / (fdf->map->depth.max * fdf->cvs.zscale));
	else if ((l.e.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance,
			-(l.e.z / (fdf->map->depth.min * fdf->cvs.zscale)));
	c.e = point2c(c.e.x * fdf->cvs.t.z + fdf->cvs.t.x,
		c.e.y * fdf->cvs.t.z + fdf->cvs.t.y, g);
	plot(fdf, c);
}
