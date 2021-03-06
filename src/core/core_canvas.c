/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_canvas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:41:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:04:32 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "core/core_canvas.h"

int					clear_canvas(t_fdf *fdf)
{
	int				*canvas_data;
	int				bits;
	int				len;

	if (!(fdf->cvs.img))
		fdf->cvs.img = mlx_new_image(fdf->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = (int *)mlx_get_data_addr(fdf->cvs.img, &bits,
		&len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 32);
	while (--len)
	{
		canvas_data[len] = fdf->appearance.bg.raw;
	}
	return (1);
}

int					canvas_init(t_fdf *fdf)
{
	t_point3		t;
	t_point2		s;

	s = point2(WIN_WIDTH, WIN_HEIGHT);
	t = point3((s.x - (fdf->map->width - 1) * (s.x * CANVAS_WF) /
		(((fdf->map->width > fdf->map->height) ? fdf->map->width :
		fdf->map->height) - 1)) / 2, (s.y - (fdf->map->height - 1) *
		(s.y * CANVAS_HF) / (((fdf->map->width > fdf->map->height) ?
		fdf->map->width : fdf->map->height) - 1)) / 2, (s.y * CANVAS_WF) /
		(((fdf->map->width > fdf->map->height) ? fdf->map->width :
		fdf->map->height) - 1));
	fdf->cvs.t = t;
	fdf->cvs.r = point3(0, 0, 0);
	fdf->cvs.zscale = 1;
	fdf->cvs.w = WIN_WIDTH * CANVAS_WF;
	fdf->cvs.h = WIN_HEIGHT * CANVAS_HF;
	fdf->cvs.w = (fdf->map->width >= fdf->map->height) ? fdf->cvs.w
		: ((float)fdf->map->width / fdf->map->height) * fdf->cvs.h;
	fdf->cvs.h = (fdf->map->width <= fdf->map->height) ? fdf->cvs.h
		: ((float)fdf->map->height / fdf->map->width) * fdf->cvs.w;
	fdf->cvs.zscale = 1;
	fdf->cvs.changed = 1;
	clear_canvas(fdf);
	return (1);
}
