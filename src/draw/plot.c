/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:44:27 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 22:39:02 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/plot.h"

void			plot(t_fdf *fdf, t_line *l)
{
	t_point2	delta;
	t_point2	sign;
	t_point2	error;

	delta = point2(fabs(l->s->x - l->e->x), fabs(l->s->y - l->e->y));
	sign = point2(l->s->x < l->e->x ? 1 : -1, l->s->y < l->e->y ? 1 : -1);
	error = point2(delta.x - delta.y, 0);
	while ((sign.x == 1 && l->s->x <= l->e->x) || (sign.x == -1 &&
			l->s->x >= l->e->x) || (sign.y == 1 && l->s->y <= l->e->y) ||
			(sign.y == -1 && l->s->y >= l->e->y))
	{
		mlx_pixel_put(fdf->mlx, fdf->win, l->s->x, l->s->y, white());
		error.y = error.x * 2;
		if (error.y > -delta.y)
		{
			error.x -= delta.y;
			l->s->x += sign.x;
		}
		if (error.y < delta.x)
		{
			error.x += delta.x;
			l->s->y += sign.y;
		}
	}
}
