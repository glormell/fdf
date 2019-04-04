/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:35:43 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 21:29:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_keys.h"

int				key_press(int key, void *param)
{
	static int	shift = 0;

    if (key == K_ESC || key == K_Q)
        close_hook(param);
	else if (key == 1L << 30)
		shift -= 1;
	else if (key == K_LSHFT || key == K_RSHFT)
		shift += 1;
	else if (key == K_R)
		repair_hook(param);
	else if (is_arrow(key))
		arrow_hook(key, shift, param);
	else if (is_zoom(key, shift))
		zoom_hook(key, shift, param);
	else if ((key == K_PRD || key == K_DOT) && shift)
		zrotate_hook(key, param);
	else if ((key == K_Z) && shift)
		zscale_hook(-0.1, param);
	else if (key == K_Z)
		zscale_hook(0.1, param);
	return (0);
}

int				key_release(int key, void *param)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, param);
	return (0);
}

