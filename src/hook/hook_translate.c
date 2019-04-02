/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/02 20:47:23 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "hook/hook_translate.h"

int					left_hook(void *param)
{
	return(translate_hook(point3(0.1, 0, 0), param));
}

int					right_hook(void *param)
{
	return(translate_hook(point3(-0.1, 0, 0), param));
}

int					top_hook(void *param)
{
	return(translate_hook(point3(0, 0.1, 0), param));
}

int					bottom_hook(void *param)
{
	return(translate_hook(point3(0, -0.1, 0), param));
}

int					translate_hook(t_point3 p, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->t.x += p.x;
	fdf->t.y += p.y;
	fdf->t.z += fdf->t.z * p.z;
	fdf->canvas.changed = 1;
	return (1);
}
