/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:37:12 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:00:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/map.h"

t_line				*h_line(int i, int *points, int width)
{
	t_point3		*start;
	t_point3		*end;
	t_line			*line;
	double			x;
	double			y;

	x = i % width;
	y = (i + 1) / width;
	start = p_point3(x, y, points[i]);
	x = (i + 1) % width;
	end = p_point3(x, y, points[i + 1]);
	line = p_line(start, end);

	return (line);
}

t_line				*v_line(int i, int *points, int width)
{
	t_line			*line;
	t_point3		*start;
	t_point3		*end;
	double			x;
	double			y;

	x = i % width;
	y = i / width;
	start = p_point3(x, y, points[i]);
	y = i / width + 1;
	end = p_point3(x, y, points[i + width]);
	line = p_line(start, end);

	return (line);
}

void			draw_map(void *param, int clr)
{
	t_fdf		*fdf;
    int 		i;

	fdf = (t_fdf *)param;
	i = -1;
	while (++i < fdf->map->width * fdf->map->height)
    {
        if ((i + 1) % fdf->map->width != 0)
			draw_line(fdf, h_line(i, fdf->map->points, fdf->map->width), clr);
        if (i / fdf->map->width < fdf->map->height - 1)
			draw_line(fdf, v_line(i, fdf->map->points, fdf->map->width), clr);
    }
}
