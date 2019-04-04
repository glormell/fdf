/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zscale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:56:47 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 21:54:05 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_zscale.h"

int			zscale_hook(float zscale, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	if (fdf->canvas.zscale + zscale >= 1)
		fdf->canvas.zscale += zscale;
	fdf->canvas.changed = 1;
	return (1);
}
