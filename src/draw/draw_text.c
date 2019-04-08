/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_text.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 06:25:11 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:31:03 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_text.h"

void				put_info(t_fdf *fdf)
{
	mlx_string_put(fdf->mlx, fdf->win, 10, 10,
			fdf->appearance.positive.raw, fdf->appearance.name);
	mlx_string_put(fdf->mlx, fdf->win, 10, 30,
			fdf->appearance.base.raw, fdf->appearance.fw);
	mlx_string_put(fdf->mlx, fdf->win, 10, 50,
			fdf->appearance.negative.raw, fdf->appearance.sw);
}

void				put_menu(t_fdf *fdf)
{
	if (!fdf->menu)
		return ;
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 230, 30,
		fdf->appearance.base.raw, "[Arrows] | Translate");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 230, 50,
		fdf->appearance.base.raw, "[H], [J], [K], [L]");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 300, 80,
		fdf->appearance.base.raw, "[Shift] + [Arrows] | Rotate");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 300, 110,
		fdf->appearance.base.raw, "[Shift] + ([+], [-]) | Zoom");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 297, 130,
	fdf->appearance.base.raw, "Numpad [+], [-], [=]");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 310, 160,
		fdf->appearance.base.raw, "[Z], [Shift] + [Z] | Z-Scale");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 150, 190,
		fdf->appearance.base.raw, "[R] | Repair");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 250, 220,
		fdf->appearance.base.raw, "[0] - [9] | Appearance");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 190, 250,
		fdf->appearance.base.raw, "[P], [S] | Audio");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 130, 280,
		fdf->appearance.base.raw, "[M] | Menu");
	mlx_string_put(fdf->mlx, fdf->win, WIN_WIDTH - 200, 310,
		fdf->appearance.base.raw, "[Q], [Esc] | Quit");
}
