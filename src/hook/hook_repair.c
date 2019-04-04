/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_repair.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 01:56:30 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 03:00:19 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_repair.h"

int			repair_hook(void *param)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)param))
		return (0);
	draw_init(fdf);
	return (1);
}
