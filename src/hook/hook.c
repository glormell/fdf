/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:16:27 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:29:33 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook.h"

int				key_press(int key, void *param)
{
	static int	shift = 0;

    if (key == K_ESC || key == K_Q)
        close_hook(param);
	else if (key == 1L << 30)
		shift -= 1;
	else if (key == K_ARW_L && shift)
		shift_left_hook(param);
	else if (key == K_ARW_B && shift)
		shift_bottom_hook(param);
	else if (key == K_ARW_T && shift)
		shift_top_hook(param);
	else if (key == K_ARW_R && shift)
		shift_right_hook(param);
	else if (key == K_LSHFT || key == K_RSHFT)
		shift += 1;
	else if (key == K_ARW_L || key == K_H)
		left_hook(param);
	else if (key == K_ARW_B || key == K_J)
		bottom_hook(param);
	else if (key == K_ARW_T || key == K_K)
		top_hook(param);
	else if (key == K_ARW_R || key == K_L)
		right_hook(param);
	return (0);
}

int				key_release(int key, void *param)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, param);
	return (0);
}

int				hook_init(t_fdf *fdf)
{
    mlx_hook(fdf->win, E_CLOSE, XM_CLOSE, close_hook, (void *)0);
	mlx_hook(fdf->win, E_KPRESS, XM_KPRESS, key_press, fdf);
	mlx_hook(fdf->win, E_KRELEASE, XM_KRELEASE, key_release, fdf);

	return (1);
}
