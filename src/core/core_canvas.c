/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_canvas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:41:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 21:15:30 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_canvas.h"

int					clear_canvas(t_fdf *fdf)
{
	char			*canvas_data;
	int				bits;
	int				len;

	if (!(fdf->canvas.img))
		fdf->canvas.img = mlx_new_image(fdf->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(fdf->canvas.img, &bits, &len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 8);
	while (len--)
		*(canvas_data++) = 0;
	return (1);
}

int					canvas_init(t_fdf *fdf)
{
	t_point3		t;
	t_point2		s;

	clear_canvas(fdf);
	s = point2(WIN_WIDTH, WIN_HEIGHT);
	t = point3(
		(s.x - (fdf->map->width - 1) * (s.x * 0.8) / (((fdf->map->width > 
		fdf->map->height) ? fdf->map->width : fdf->map->height) - 1)) / 2,
		(s.y - (fdf->map->height - 1) * (s.y * 0.8) / (((fdf->map->width > 
		fdf->map->height) ? fdf->map->width : fdf->map->height) - 1)) / 2,
		(s.y * 0.8) / (((fdf->map->width > fdf->map->height) ? 
		fdf->map->width : fdf->map->height) - 1));
	fdf->canvas.t = t;
	fdf->canvas.r = point3(0, 0, 0);
	fdf->canvas.zscale = 1;
	fdf->canvas.w = WIN_WIDTH * CANVAS_WF;
	fdf->canvas.h = WIN_HEIGHT * CANVAS_HF;
	fdf->canvas.w = (fdf->map->width >= fdf->map->height) ? fdf->canvas.w
		: ((float)fdf->map->width / fdf->map->height) * fdf->canvas.h;
	fdf->canvas.h = (fdf->map->width <= fdf->map->height) ? fdf->canvas.h
		: ((float)fdf->map->height / fdf->map->width) * fdf->canvas.w;
	fdf->canvas.changed = 1;
	return (1);
}
