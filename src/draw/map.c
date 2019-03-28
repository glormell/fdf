/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:37:12 by glormell          #+#    #+#             */
/*   Updated: 2019/03/27 15:17:38 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/map.h"

t_line				*h_line(int i, int *points, int width, t_point3 *r)
{
	t_point3		*start;
	t_point3		*end;
	t_line			*line;
	double			x;
	double			y;

	x = i % width;
	y = (i + 1) / width;
	start = rotate(p_point3(x, y, points[i]), r);
	x = (i + 1) % width;
	end = rotate(p_point3(x, y, points[i + 1]), r);
	line = p_line(start, end);

	return (line);
}

t_line				*v_line(int i, int *points, int width, t_point3 *r)
{
	t_line			*line;
	t_point3		*start;
	t_point3		*end;
	double			x;
	double			y;

	x = i % width;
	y = i / width;
	start = rotate(p_point3(x, y, points[i]), r);
	y = i / width + 1;
	end = rotate(p_point3(x, y, points[i + width]), r);
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
			draw_line(fdf, 
				h_line(i, fdf->map->points, fdf->map->width, fdf->r), clr);
        if (i / fdf->map->width < fdf->map->height - 1)
			draw_line(fdf, 
				v_line(i, fdf->map->points, fdf->map->width, fdf->r), clr);
    }
}
