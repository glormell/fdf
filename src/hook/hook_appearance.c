/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_appearance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:03:52 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 13:44:56 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_appearance.h"

int			is_appearance(int k)
{
	return (k == K_1 || k == K_2 || k == K_3 || k == K_4 || k == K_5 ||
		k == K_6 || k == K_7 || k == K_8 || k == K_9 || k == K_0 ||
		k == K_NP_1 || k == K_NP_2 || k == K_NP_3 || k == K_NP_4 ||
		k == K_NP_5 || k == K_NP_6 || k == K_NP_7 || k == K_NP_8 ||
		k == K_NP_9 || k == K_NP_0);
}

void		appearance_hook_worker(t_fdf *fdf, int key)
{
	if (key == K_1 || key == K_NP_1)
		fdf->appearance = ukrainian_appearance();
	else if (key == K_2 || key == K_NP_2)
		fdf->appearance = russian_appearance();
	else if (key == K_3 || key == K_NP_3)
		fdf->appearance = german_appearance();
	else if (key == K_4 || key == K_NP_4)
		fdf->appearance = french_appearance();
	else if (key == K_5 || key == K_NP_5)
		fdf->appearance = american_appearance();
	else if (key == K_6 || key == K_NP_6)
		fdf->appearance = english_appearance();
	else if (key == K_7 || key == K_NP_7)
		fdf->appearance = chineese_appearance();
	else if (key == K_8 || key == K_NP_8)
		fdf->appearance = israel_appearance();
	else if (key == K_9 || key == K_NP_9)
		fdf->appearance = syria_appearance();
	else if (key == K_0 || key == K_NP_0)
		fdf->appearance = default_appearance();
	play_audio(fdf->appearance.audio);
	fdf->cvs.changed = 1;
}

void		appearance_hook(void *param, int key)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return ;
	appearance_hook_worker(fdf, key);
}
