/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_plot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:13:01 by glormell          #+#    #+#             */
/*   Updated: 2019/04/05 13:17:01 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_plot.h"

static void	_plot(t_line2c l, t_fdf *fdf)
{
	t_point2	d;
	t_point2	s;
	t_point2c	c;
	t_point2	e;

	d = point2(fabs(l.e.x - l.s.x), fabs(l.e.y - l.s.y));
	s = point2((l.s.x < l.e.x) ? 1 : -1, (l.s.y < l.e.y) ? 1 : -1);
	e.x = d.x - d.y;
	c = l.s;
	while (c.x != l.e.x || c.y != l.e.y)
	{
		if (c.x > 0 && c.x < WIN_WIDTH && c.y > 0 && c.y < WIN_HEIGHT)
		{
			c.c = line_gradient(l, c, d);
			put_pixel(fdf, c);
		}
		if ((e.y = e.x * 2) > -d.y)
		{
			e.x -= d.y;
			c.x += s.x;
		}
		if (e.y < d.x)
		{
			e.x += d.x;
			c.y += s.y;
		}
	}
}

void			plot(t_fdf *fdf, t_line2c l)
{
	l.s = point2c((int)l.s.x, (int)l.s.y, l.s.c);
	l.e = point2c((int)l.e.x, (int)l.e.y, l.e.c);
	_plot(l, fdf);
}
