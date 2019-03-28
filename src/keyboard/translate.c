/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:48:13 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 02:28:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "keyboard/translate.h"

int					translate(int x, int y, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->draw_map(fdf, clear());
	fdf->t->x += x;
	fdf->t->y += y;
	fdf->draw_map(fdf, white());
	return (1);
}

int					left_hook(void *param)
{
	printf("%p\n", param);
	return(translate(-10, 0, param));
}

int					right_hook(void *param)
{
	printf("%p\n", param);
	return(translate(10, 0, param));
}

int					top_hook(void *param)
{
	printf("%p\n", param);
	return(translate(0, -10, param));
}

int					bottom_hook(void *param)
{
	printf("%p\n", param);
	return(translate(0, 10, param));
}
