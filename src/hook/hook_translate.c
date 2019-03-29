/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:17:18 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_translate.h"

int					translate_hook(t_point3 p, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->draw_map(fdf, clear());
	fdf->t->x += p.x;
	fdf->t->y += p.y;
	fdf->t->z += p.z;
	fdf->draw_map(fdf, white());
	return (1);
}

int					left_hook(void *param)
{
	return(translate_hook(point3(-10, 0, 0), param));
}

int					right_hook(void *param)
{
	return(translate_hook(point3(10, 0, 0), param));
}

int					top_hook(void *param)
{
	return(translate_hook(point3(0, -10, 0), param));
}

int					bottom_hook(void *param)
{
	return(translate_hook(point3(0, 10, 0), param));
}
