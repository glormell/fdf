/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:46:55 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 01:57:37 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/window.h"

int			win_init(t_fdf *fdf, int width, int height, char *title)
{
    if (!(fdf->win = mlx_new_window(fdf->mlx, width, height, title)) ||
		!(add_mlx_handlers(fdf)))
		return (0);
	return (1);
}
