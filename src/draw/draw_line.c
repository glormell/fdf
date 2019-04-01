/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:12:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 09:17:42 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_line.h"

void            draw_line(t_fdf *fdf, t_line3 l)
{
	t_line2c	iso_l;
	double		factor;

	iso_l = line2c(proj(rotate(l.s, fdf->r)), proj(rotate(l.e, fdf->r)));
	iso_l.s.x *= fdf->t.z;
	iso_l.s.x += fdf->t.x;
	iso_l.e.x *= fdf->t.z;
	iso_l.e.x += fdf->t.x;
	iso_l.s.y *= fdf->t.z;
	iso_l.s.y += fdf->t.y;
	iso_l.e.y *= fdf->t.z;
	iso_l.e.y += fdf->t.y;
	factor = (fdf->map->depth) ? (double)l.s.z / fdf->map->depth : 0;
	iso_l.s.c = color_gradient(fdf->appearance, factor);
	factor = (fdf->map->depth) ? (double)l.e.z / fdf->map->depth : 0;
	iso_l.e.c = color_gradient(fdf->appearance, factor);
	plot(fdf, iso_l);
}
