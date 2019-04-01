/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:15:33 by glormell          #+#    #+#             */
/*   Updated: 2019/03/31 04:41:13 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_close.h"

int			close_hook(void *param)
{
	t_fdf	*fdf;

	fdf = (t_fdf *)param;
	mlx_destroy_image(fdf->mlx, fdf->canvas.img);
	free(fdf->mlx);
	free(fdf->win);
	free(fdf->map->points);
	free(fdf->map);
	free(fdf);
	exit(0);
	return (0);
}
