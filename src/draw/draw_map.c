/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 22:51:43 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 23:40:15 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_map.h"

t_line			*h_line(int i, int *points, int width, int t)
{
	t_point3	*start;
	t_point3	*end;
	t_line		*line;

	start = p_point3(i % width * t, (i + 1) / width * t, points[i]);
	end = p_point3((i + 1) % width * t, (i + 1) / width * t, points[i + 1]);
	line = p_line(start, end);

	return (line);
}

t_line			*v_line(int i, int *points, int width, int t)
{
	t_line		*line;
	t_point3	*start;
	t_point3	*end;

	start = p_point3(i % width * t, i / width * t, points[i]);
	end = p_point3(i % width * t, (i / width + 1) * t, points[i + width]);
	line = p_line(start, end);

	return (line);
}

void		draw_map(t_fdf *fdf)
{
    int i;
    int t;

	i = -1;
	t = 40;
    while (++i < fdf->map->width * fdf->map->height)
    {
        if ((i + 1) % fdf->map->width != 0)
			draw_line(fdf, h_line(i, fdf->map->points, fdf->map->width, t));
        if (i / fdf->map->width < fdf->map->height - 1)
			draw_line(fdf, v_line(i, fdf->map->points, fdf->map->width, t));
    }
}
