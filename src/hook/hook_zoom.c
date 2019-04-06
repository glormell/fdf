/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zoom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:15:48 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 00:38:59 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_zoom.h"

int		is_zoom(int k, int shift)
{
	return (((k == K_MNS || k == K_EQ) && shift) ||
		k == K_NP_MNS || k == K_NP_PLS || k == K_NP_EQ);
}

int		minus_hook(void *param)
{
	return (translate_hook(point3(0, 0, -0.1), param));
}

int		plus_hook(void *param)
{
	return (translate_hook(point3(0, 0, 0.1), param));
}

int		reset_hook(void *param)
{
	return (translate_hook(point3(-2, -2, -2), param));
}

int		zoom_hook(int key, int shift, void *param)
{
	if (key == K_MNS || key == K_NP_MNS)
		minus_hook(param);
	else if ((key == K_EQ && shift) || key == K_NP_PLS)
		plus_hook(param);
	else if (key == K_EQ || key == K_NP_EQ)
		reset_hook(param);
	return (0);
}
