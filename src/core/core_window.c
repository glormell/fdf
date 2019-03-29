/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:11:07 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:11:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_window.h"

int			win_init(t_fdf *fdf, int width, int height, char *title)
{
    if (!(fdf->win = mlx_new_window(fdf->mlx, width, height, title)))
		return (0);
	return (1);
}
