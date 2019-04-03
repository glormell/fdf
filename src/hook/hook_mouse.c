/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:41:27 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 22:52:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "hook/hook_mouse.h"

int			mouse_press(int button, int x, int y, void *param)
{
	if (button == M_LEFT)
		mouse_move(x, y, (void *)0);
	else if (button == M_MIDDLE)
		mouse_move(x, y, (void *)1);
	else if (button == M_RIGHT)
		mouse_move(x, y, (void *)2);
	else if (button == M_SCR_UP)
		translate_hook(point3(0, 0, 0.1), param);
	else if (button == M_SCR_DOWN)
		translate_hook(point3(0, 0, -0.1), param);
	return (0);
}

int			mouse_release(int button, int x, int y, void *param)
{
	if (button == M_LEFT)
		mouse_move(x, y, (void *)0);
	else if (button == M_MIDDLE)
		mouse_move(x, y, (void *)1);
	else if (button == M_RIGHT)
		mouse_move(x, y, (void *)2);
	return (0);
}

int			mouse_move(int x, int y, void *param)
{
	static t_point2	prev = (t_point2){ 0, 0 };
	static int		left = 0;
	static int		middle = 0;
	static int		right = 0;

	if (param == (void *)0)
		return (y > 0 ? left = !left : 0);
	else if (param == (void *)1)
		return (y > 0 ? middle = !middle : 0);
	else if (param == (void *)2)
		return (y > 0 ? right = !right : 0);
	if (left)
		translate_hook(point3((x - prev.x), (y - prev.y), 0), param);
	else if (right)
		rotate_hook(point3(-(y - prev.y) * 0.001, (x - prev.x) * 0.001, 0),
			param);
	prev = (t_point2){ x, y };
	return (0);
}
