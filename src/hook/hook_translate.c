/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/05 22:58:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "hook/hook_translate.h"

int					left_hook(void *param)
{
	return(translate_hook(point3(5, 0, 0), param));
}

int					right_hook(void *param)
{
	return(translate_hook(point3(-5, 0, 0), param));
}

int					top_hook(void *param)
{
	return(translate_hook(point3(0, 5, 0), param));
}

int					bottom_hook(void *param)
{
	return(translate_hook(point3(0, -5, 0), param));
}

t_point2			canvas_mouse(t_fdf *fdf)
{
	t_point2		c;

	c.x = fdf->mouse.x - fdf->canvas.t.x;
	if (fdf->mouse.x < fdf->canvas.t.x)
		c.x = 0;
	if (fdf->mouse.x > fdf->canvas.t.x + fdf->canvas.w)
		c.x = fdf->canvas.t.x + fdf->canvas.w;
	c.y = fdf->mouse.y - fdf->canvas.t.y;
	if (fdf->mouse.y < fdf->canvas.t.y)
		c.y = 0;
	if (fdf->mouse.y > fdf->canvas.t.y + fdf->canvas.h)
		c.y = fdf->canvas.t.y + fdf->canvas.h;
	return (c);
}

int					translate_hook(t_point3 p, void *param)
{
	static t_point3	ct = (t_point3){-1, -1, -1};
	t_fdf			*fdf;
	t_point2		d;
	t_point2		m;

	if (!(fdf = (t_fdf *)param))
		return (0);
	if (ct.x == -1 && ct.y == -1 && ct.z == -1)
		ct = point3((WIN_WIDTH - fdf->canvas.w) / 2,
			(WIN_HEIGHT - fdf->canvas.h) / 2, fdf->canvas.t.z);
	fdf->canvas.t.x += p.x;
	fdf->canvas.t.y += p.y;
	d = point2(fdf->canvas.w * p.z, fdf->canvas.h * p.z);
	m = canvas_mouse(fdf);
	fdf->canvas.t.z += fdf->canvas.t.z * p.z;
	fdf->canvas.w += d.x;
	fdf->canvas.h += d.y;
	fdf->canvas.t.x -= d.x * (m.x / fdf->canvas.w);
	fdf->canvas.t.y -=  d.y * (m.y / fdf->canvas.h);
	fdf->canvas.changed = 1;
	return (1);
}
