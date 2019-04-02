/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:16:47 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 22:57:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_rotate.h"

int					rotate_hook(t_point3 p, void *param)
{
	t_fdf			*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->r.x += p.x;
	fdf->r.y += p.y;
	fdf->r.z += p.z;
	fdf->canvas.changed = 1;
	return (1);
}

int					shift_left_hook(void *param)
{
	return(rotate_hook(point3(0, -0.1, 0), param));
}

int					shift_right_hook(void *param)
{
	return (rotate_hook(point3(0, 0.1, 0), param));
}

int					shift_top_hook(void *param)
{
	return(rotate_hook(point3(0.1, 0, 0), param));
}

int					shift_bottom_hook(void *param)
{
	return(rotate_hook(point3(-0.1, 0, 0), param));
}
