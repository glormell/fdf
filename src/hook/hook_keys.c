/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:35:43 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:17:25 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_keys.h"

int				is_shift_release(int key)
{
	return (key == 1L << 30);
}

int				is_shift(int key)
{
	return (key == K_LSHFT || key == K_RSHFT);
}

int				key_press(int key, void *param)
{
	static int	shift = 0;

	if (is_close(key))
		close_hook(param);
	else if (is_shift_release(key))
		shift -= 1;
	else if (is_shift(key))
		shift += 1;
	else if (is_repair(key))
		repair_hook(param);
	else if (is_arrow(key))
		arrow_hook(key, shift, param);
	else if (is_zoom(key, shift))
		zoom_hook(key, shift, param);
	else if (is_zrotate(key, shift))
		zrotate_hook(key, param);
	else if (is_zscale(key))
		zscale_hook(param, key, shift);
	else if (is_appearance(key))
		appearance_hook(param, key);
	else if (is_audio(key))
		audio_hook(param, key);
	else if (is_menu(key))
		menu_hook(param);
	return (0);
}

int				key_release(int key, void *param)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, param);
	return (0);
}
