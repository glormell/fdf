/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_audio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:57:55 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 12:06:53 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_audio.h"

int			is_audio(int key)
{
	return (key == K_P || key == K_S);
}

void		audio_hook(int key, void *param)
{
	t_fdf	*fdf;

	fdf = (t_fdf *)param;
	if (key == K_P)
		audio_start(fdf->appearance.audio);
	else if (key == K_S)
		audio_stop(fdf->appearance.audio);
}
