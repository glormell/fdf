/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:23:06 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 02:46:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_zrotate.h"

int		zrotate_hook(int key, void *param)
{
	if (key == K_PRD)
		rotate_hook(point3(0, 0, -0.1), param);
	if (key == K_DOT)
		rotate_hook(point3(0, 0, 0.1), param);
	return (1);
}
