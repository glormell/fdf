/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_arrows.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:42:52 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 19:13:29 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_arrows.h"

int					is_arrow(int key)
{
	return (key == K_ARW_L || key == K_H || key == K_ARW_B || key == K_J || 
			key == K_ARW_T || key == K_K || key == K_ARW_R || key == K_L);
}

int					arrow_hook(int key, int shift, void *param)
{
	if (key == K_ARW_L && shift)
		return (shift_left_hook(param));
	else if (key == K_ARW_B && shift)
		return (shift_bottom_hook(param));
	else if (key == K_ARW_T && shift)
		return (shift_top_hook(param));
	else if (key == K_ARW_R && shift)
		return (shift_right_hook(param));
	else if (key == K_ARW_L || key == K_H)
		return (left_hook(param));
	else if (key == K_ARW_B || key == K_J)
		return (bottom_hook(param));
	else if (key == K_ARW_T || key == K_K)
		return (top_hook(param));
	else if (key == K_ARW_R || key == K_L)
		return (right_hook(param));
	return (0);
}
