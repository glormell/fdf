/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 20:24:25 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_translate.h"

int					left_hook(void *param)
{
	return(translate_hook(point3(-0.1, 0, 0), param));
}

int					right_hook(void *param)
{
	return(translate_hook(point3(0.1, 0, 0), param));
}

int					top_hook(void *param)
{
	return(translate_hook(point3(0, -0.1, 0), param));
}

int					bottom_hook(void *param)
{
	return(translate_hook(point3(0, 0.1, 0), param));
}

int					translate_hook(t_point3 p, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->draw_map(fdf, clear());
	fdf->t->x += fdf->map->width * fdf->t->z * p.x;
	fdf->t->y += fdf->map->height * fdf->t->z * p.y;
	fdf->t->z += fdf->t->z * p.z;
	fdf->draw_map(fdf, white());
	return (1);
}
