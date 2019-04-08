/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zscale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:56:47 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 04:43:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_zscale.h"

int			is_zscale(int key)
{
	return (key == K_Z);
}

int			zscale(float scale, void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	if (fdf->cvs.zscale + scale >= 1)
		fdf->cvs.zscale += scale;
	return (fdf->cvs.changed = 1);
}

int			zscale_hook(void *param, int key, int shift)
{
	if (key == K_Z && shift)
		return (zscale(-0.1, param));
	else if (key == K_Z)
		return (zscale(0.1, param));
	return (0);
}
