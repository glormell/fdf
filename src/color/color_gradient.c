/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_gradient.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:09:18 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 08:20:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color/color_gradient.h"

float		pc(int start, int end, int current)
{
	double	placement;
	double	distance;

	placement = current - start;
	distance = end - start;
	return ((distance == 0) ? 1.0 : (placement / distance));
}

int			light(int start, int end, double percentage)
{
	return((int)((1 - percentage) * start + percentage * end));
}

t_color		line_gradient(t_line2c l, t_point2c c, t_point2 d)
{
	double	percentage;
	t_color	r;

	if (d.x > d.y)
		percentage = pc(l.s.x, l.e.x, c.x);
	else
		percentage = pc(l.s.y, l.e.y, c.y);
	r = rgba(light(l.s.c.r, l.e.c.r, percentage),
				light(l.s.c.g, l.e.c.g, percentage),
				light(l.s.c.b, l.e.c.b, percentage), 255);
	return (r);
}

t_color		color_gradient(t_appearance a, double f)
{
	t_color	s;
	t_color	e;
	t_color	r;
	
	if (!f)
		return (a.base);
	else if (f == 1 || f == -1)
		return ((f > 0) ? a.positive : a.negative);
	s = (f >= 0) ? a.base : a.negative;
	e = (f >= 0) ? a.positive : a.base;
	f = (f < 0) ? f + 1 : f;
	r = rgba(light(s.r, e.r, f), light(s.g, e.g, f), light(s.b, e.b, f), 255);
	return (r);
}
