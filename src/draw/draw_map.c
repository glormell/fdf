/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:13:37 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 03:58:51 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_map.h"

t_line				h_line(int i, int *points, int width, t_point3 r)
{
	t_line			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % width;
	y = (i + 1) / width;
	start = rotate(point3(x, y, points[i]), r);
	x = (i + 1) % width;
	end = rotate(point3(x, y, points[i + 1]), r);
	rline = line(start, end);

	return (rline);
}

t_line				v_line(int i, int *points, int width, t_point3 r)
{
	t_line			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % width;
	y = i / width;
	start = rotate(point3(x, y, points[i]), r);
	y = i / width + 1;
	end = rotate(point3(x, y, points[i + width]), r);
	rline = line(start, end);

	return (rline);
}

int				draw_map(void *param, int clr)
{
	t_fdf		*fdf;
	int 		i;

	fdf = (t_fdf *)param;
	if (fdf->changed)
	{
		fdf->changed = 0;
		clr = white();
		mlx_put_image_to_window(fdf->mlx, fdf->win, fdf->clear, 0, 0);
		i = -1;
		while (++i < fdf->map->width * fdf->map->height)
		{
			if ((i + 1) % fdf->map->width != 0)
				draw_line(fdf, h_line(i, fdf->map->points,
							fdf->map->width, fdf->r), clr);
			if (i / fdf->map->width < fdf->map->height - 1)
				draw_line(fdf, v_line(i, fdf->map->points,
							fdf->map->width, fdf->r), clr);
		}
	}
	return (0);
}
