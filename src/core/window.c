/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:46:55 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 00:49:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/window.h"

int         key_hook(int key, void *param)
{
	static int	shift = 0;

	
    if (key == K_ESC || key == VK_CLS)
        close_hook(param);
	if (key == K_ARW_L || key == K_H)
		left_hook();
	if (key == K_ARW_B || key == K_J)
		bottom_hook();
	if (key == K_ARW_T || key == K_K)
		top_hook();
	if (key == K_ARW_R || key == K_L)
		right_hook();
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
