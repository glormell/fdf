/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:48:13 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:45:19 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "keyboard/translate.h"

int					translate(int x, int y, void *param)
{
	static t_fdf	*fdf;

	if (param && !fdf)
	{
		fdf = (t_fdf *)param;
		return (0);
	}
	fdf->draw_map(fdf, clear());
	fdf->t->x += x;
	fdf->t->y += y;
	fdf->draw_map(fdf, white());
	return (1);
}

int					left_hook(void *param)
{
	return(translate(-10, 0, (void *)0));
}

int			right_hook(void *param)
{
	return(translate(10, 0, (void *)0));
}

int			top_hook(void *param)
{
	return(translate(0, -10, (void *)0));
}

int			bottom_hook(void *param)
{
	return(translate(0, 10, (void *)0));
}
