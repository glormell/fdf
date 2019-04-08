/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 06:13:34 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:19:59 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_menu.h"

int			is_menu(int key)
{
	return (key == K_M);
}

int			menu_hook(void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	fdf->menu = !fdf->menu;
	return (fdf->cvs.changed = 1);
}
