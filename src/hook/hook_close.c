/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:15:33 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 12:05:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_close.h"

int			close_hook(void *param)
{
	t_fdf	*fdf;

	fdf = (t_fdf *)param;
	audio_stop(fdf->appearance.audio);
	mlx_destroy_image(fdf->mlx, fdf->cvs.img);
	free(fdf->mlx);
	free(fdf->win);
	free(fdf->map->points);
	free(fdf->map);
	free(fdf);
	exit(0);
	return (0);
}
