/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:16:27 by glormell          #+#    #+#             */
/*   Updated: 2019/04/05 13:31:12 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook.h"

int				hook_init(t_fdf *fdf)
{
    mlx_hook(fdf->win, E_CLOSE, XM_CLOSE, close_hook, fdf);
	mlx_hook(fdf->win, E_KPRESS, XM_KPRESS, key_press, fdf);
	mlx_hook(fdf->win, E_KRELEASE, XM_KRELEASE, key_release, fdf);
	mlx_hook(fdf->win, E_MPRESS, XM_MPRESS, mouse_press, fdf);
	mlx_hook(fdf->win, E_MRELEASE, XM_MRELEASE, mouse_release, fdf);
	mlx_hook(fdf->win, E_MMOVE, XM_MMOVE, mouse_move, fdf);

	return (1);
}
