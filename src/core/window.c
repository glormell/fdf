/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:46:55 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:43:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "core/window.h"

int         key_hook(int key, void *param)
{
    if (key == 53 || key == 12)
        close_hook(param);
	if (key == 123 || key == 4)
		left_hook((void *)0);
	if (key == 125 || key == 38)
		bottom_hook((void *)0);
	if (key == 126 || key == 40)
		top_hook((void *)0);
	if (key == 124 || key == 37)
		right_hook((void *)0);
    return (0);
}

int			win_init(t_fdf *fdf, int width, int height, char *title)
{
    if (!(fdf->win = mlx_new_window(fdf->mlx, width, height, title)))
		return (0);
    mlx_key_hook(fdf->win, key_hook, (void *)0);
	translate(0, 0, fdf);
    mlx_hook(fdf->win, 17, (1L << 17), close_hook, (void *)0);
	return (1);
}
