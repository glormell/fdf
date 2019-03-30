/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_gradient.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:09:18 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 19:24:44 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color/color_gradient.h"

float		pc(int start, int current, int end)
{
	return ((end - start == 0) ? 1.0 : ((current - start) / (end - start)));
}

int			light(int start, int end, float percentage)
{
	return((int)((1 - percentage) * start + percentage * end));
}

int			grad(t_point2 s, t_point2 e, t_point2 c, t_point2 d)
{
	float	percentage;
	t_color	clr;

	percentage = (d.x > d.y) ? pc(s.x, e.x, c.x) : pc(s.y, e.y, c.y);
	
	clr = rgb(light(s.c.r, e.c.r, percentage),
			light(s.c.g, e.c.g, percentage),
			light(s.c.b, e.c.b, percentage));

	return (clr.raw);
}
