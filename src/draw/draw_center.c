/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_center.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:11:36 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 06:50:07 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_center.h"

void			center(t_fdf *fdf)
{
	t_point3	t;
	t_point2	s;

	s = point2(1000, 1000, black());

	t = point3(
		(s.x - (fdf->map->width - 1) * (s.x * 0.8) / (((fdf->map->width > 
		fdf->map->height) ? fdf->map->width : fdf->map->height) - 1)) / 2,
		(s.y - (fdf->map->height - 1) * (s.y * 0.8) / (((fdf->map->width > 
		fdf->map->height) ? fdf->map->width : fdf->map->height) - 1)) / 2,
		(s.y * 0.8) / (((fdf->map->width > fdf->map->height) ? 
		fdf->map->width : fdf->map->height) - 1)
	);

	fdf->t = t;
	fdf->r = point3(0, 0, 0);
	fdf->changed = 1;
}
