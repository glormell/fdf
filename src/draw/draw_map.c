/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:13:37 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 10:03:56 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_map.h"

t_line3				h_line(int i, int *points, int width)
{
	t_line3			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % width;
	y = (i + 1) / width;
	start = point3(x, y, points[i]);
	x = (i + 1) % width;
	end = point3(x, y, points[i + 1]);
	rline = line3(start, end);

	return (rline);
}

t_line3				v_line(int i, int *points, int width)
{
	t_line3			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % width;
	y = i / width;
	start = point3(x, y, points[i]);
	y = i / width + 1;
	end = point3(x, y, points[i + width]);
	rline = line3(start, end);

	return (rline);
}

int				draw_map(t_fdf *fdf)
{
	int 		i;

	if (fdf->canvas.changed)
	{
		clear_canvas(fdf);
		fdf->canvas.changed = 0;
		i = -1;
		while (++i < fdf->map->width * fdf->map->height)
		{
			if ((i + 1) % fdf->map->width != 0)
				draw_line(fdf, 
						h_line(i, fdf->map->points, fdf->map->width));
			if (i / fdf->map->width < fdf->map->height - 1)
				draw_line(fdf,
						v_line(i, fdf->map->points, fdf->map->width));
		}
		mlx_put_image_to_window(fdf->mlx, fdf->win, fdf->canvas.img, 0, 0);
	}
	return (0);
}
