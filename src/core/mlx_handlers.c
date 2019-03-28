/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 01:44:01 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 02:29:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/mlx_handlers.h"

int				key_hook(int key, void *param)
{
	static int	shift = 0;

    if (key == K_ESC || key == VK_CLS)
        close_hook(param);
	if (key == K_ARW_L || key == K_H)
		left_hook(param);
	if (key == K_ARW_B || key == K_J)
		bottom_hook(param);
	if (key == K_ARW_T || key == K_K)
		top_hook(param);
	if (key == K_ARW_R || key == K_L)
		right_hook(param);
    return (0);
}

int				add_mlx_handlers(t_fdf *fdf)
{
    mlx_hook(fdf->win, 17, (1L << 17), close_hook, (void *)0);
    mlx_key_hook(fdf->win, key_hook, fdf);

	return (1);
}
