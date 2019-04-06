/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_appearance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:03:52 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:31:44 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_appearance.h"

int			is_appearance(int k)
{
	return (k == K_1 || k == K_2 || k == K_3 || k == K_4 || k == K_0 ||
		k == K_NP_1 || k == K_NP_2 || k == K_NP_3 || k == K_NP_4 ||
		k == K_NP_0);
}

void		appearance_hook(void *param, int key)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return ;
	if (key == K_1 || key == K_NP_1)
		fdf->appearance = ukrainian_appearance();
	else if (key == K_2 || key == K_NP_2)
		fdf->appearance = russian_appearance();
	else if (key == K_3 || key == K_NP_3)
		fdf->appearance = french_appearance();
	else if (key == K_4 || key == K_NP_4)
		fdf->appearance = chineese_appearance();
	else if (key == K_0 || key == K_NP_0)
		fdf->appearance = default_appearance();
	fdf->cvs.changed = 1;
}
