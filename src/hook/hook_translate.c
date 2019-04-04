/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 20:54:29 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int					translate_hook(t_point3 p, void *param)
{
	t_fdf			*fdf;
	t_point2		d;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->canvas.t.x += p.x;
	fdf->canvas.t.y += p.y;
	fdf->canvas.t.z += fdf->canvas.t.z * p.z;
	d = point2(fdf->canvas.w * p.z, fdf->canvas.h * p.z);
	fdf->canvas.w += d.x;
	fdf->canvas.h += d.y;
	fdf->canvas.t.y -= d.y * 0.5;
	fdf->canvas.t.x -= d.x * 0.5;
	fdf->canvas.changed = 1;
	return (1);
}
