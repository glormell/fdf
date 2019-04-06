/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 01:34:40 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_translate.h"

int					left_hook(void *param)
{
	return (translate_hook(point3(5, 0, 0), param));
}

int					right_hook(void *param)
{
	return (translate_hook(point3(-5, 0, 0), param));
}

int					top_hook(void *param)
{
	return (translate_hook(point3(0, 5, 0), param));
}

int					bottom_hook(void *param)
{
	return (translate_hook(point3(0, -5, 0), param));
}

int					translate_hook(t_point3 p, void *param)
{
	static t_point3	ct = (t_point3){-1, -1, -1};
	t_fdf			*fdf;
	t_point2		d;
	t_point2		m;

	if (!(fdf = (t_fdf *)param))
		return (0);
	if ((ct.x == -1 && ct.y == -1 && ct.z == -1) ||
		(ct.x == -2 && ct.y == -2 && ct.z == -2))
		ct = point3((WIN_WIDTH - fdf->cvs.w) / 2,
			(WIN_HEIGHT - fdf->cvs.h) / 2, fdf->cvs.t.z);
	if (p.x == -2 && p.y == -2 && p.z == -2)
	{
		fdf->cvs.t = ct;
		return (fdf->cvs.changed = 1);
	}
	fdf->cvs.t = point3(fdf->cvs.t.x + p.x, fdf->cvs.t.y + p.y, fdf->cvs.t.z);
	d = point2(fdf->cvs.w * p.z, fdf->cvs.h * p.z);
	m = canvas_mouse(fdf);
	fdf->cvs.t.z += fdf->cvs.t.z * p.z;
	fdf->cvs.w += d.x;
	fdf->cvs.h += d.y;
	fdf->cvs.t.x -= d.x * (m.x / fdf->cvs.w);
	fdf->cvs.t.y -= d.y * (m.y / fdf->cvs.h);
	return (fdf->cvs.changed = 1);
}
