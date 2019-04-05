/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:13:37 by glormell          #+#    #+#             */
/*   Updated: 2019/04/05 13:27:36 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_map.h"

t_line3				h_line(int i, t_map *map)
{
	t_line3			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % map->width;
	y = (i + 1) / map->width;
	start = point3(x - (map->width / 2),
		y - (map->height / 2), map->points[i]);
	x = (i + 1) % map->width;
	end = point3(x - (map->width / 2), 
		y - (map->height / 2), map->points[i + 1]);
	rline = line3(start, end);
	return (rline);
}

t_line3				v_line(int i, t_map *map)
{
	t_line3			rline;
	t_point3		start;
	t_point3		end;
	double			x;
	double			y;

	x = i % map->width;
	y = i / map->width;
	start = point3(x - (map->width / 2),
		y - (map->height / 2), map->points[i]);
	y = i / map->width + 1;
	end = point3(x - (map->width / 2),
		y - (map->height / 2), map->points[i + map->width]);
	rline = line3(start, end);
	return (rline);
}

void				*_draw_map(void *param)
{
	unsigned long	i;
	t_fdf			*fdf;

	fdf = (t_fdf *)param;
	if (fdf->canvas.changed)
	{
		clear_canvas(fdf);
		fdf->canvas.changed = 0;
		i = -1;
		while (++i < fdf->map->width * fdf->map->height)
		{
			if ((i + 1) % fdf->map->width != 0)
				draw_line(fdf, h_line(i, fdf->map));
			if (i / fdf->map->width < fdf->map->height - 1)
				draw_line(fdf, v_line(i, fdf->map));
		}
		mlx_put_image_to_window(fdf->mlx, fdf->win, fdf->canvas.img, 0, 0);
	}
	return (0);
}

int					draw_map(t_fdf *fdf)
{
	_draw_map(fdf);
	return (0);
}
