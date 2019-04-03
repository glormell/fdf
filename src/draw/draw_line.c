/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:12:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 22:25:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "draw/draw_line.h"

void            draw_line(t_fdf *fdf, t_line3 l)
{
	t_line2c	c;
	t_color		g;

	c = line2c(proj(rotate(l.s, fdf->r)), proj(rotate(l.e, fdf->r)));
	g = color_gradient(fdf->appearance, 0);
	if ((l.s.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance, l.s.z / fdf->map->depth.max);
	else if ((l.s.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance, -(l.s.z / fdf->map->depth.min));
	c.s = point2c(c.s.x * fdf->t.z + fdf->t.x, c.s.y * fdf->t.z + fdf->t.y, g);
	g = color_gradient(fdf->appearance, 0);
	if ((l.e.z >= 0) && fdf->map->depth.max)
		g = color_gradient(fdf->appearance, l.e.z / fdf->map->depth.max);
	else if ((l.e.z < 0) && fdf->map->depth.min)
		g = color_gradient(fdf->appearance, -(l.e.z / fdf->map->depth.min));
	c.e = point2c(c.e.x * fdf->t.z + fdf->t.x, c.e.y * fdf->t.z + fdf->t.y, g);
	plot(fdf, c);
}
