/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:41:27 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 23:20:48 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_mouse.h"

t_point2		canvas_mouse(t_fdf *fdf)
{
	t_point2	c;

	c.x = fdf->mouse.x - fdf->cvs.t.x;
	if (fdf->mouse.x < fdf->cvs.t.x)
		c.x = 0;
	if (fdf->mouse.x > fdf->cvs.t.x + fdf->cvs.w)
		c.x = fdf->cvs.t.x + fdf->cvs.w;
	c.y = fdf->mouse.y - fdf->cvs.t.y;
	if (fdf->mouse.y < fdf->cvs.t.y)
		c.y = 0;
	if (fdf->mouse.y > fdf->cvs.t.y + fdf->cvs.h)
		c.y = fdf->cvs.t.y + fdf->cvs.h;
	return (c);
}

int				mouse_press(int button, int x, int y, void *param)
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

int				mouse_release(int button, int x, int y, void *param)
{
	(void)param;
	if (button == M_LEFT)
		mouse_move(x, y, (void *)0);
	else if (button == M_MIDDLE)
		mouse_move(x, y, (void *)1);
	else if (button == M_RIGHT)
		mouse_move(x, y, (void *)2);
	return (0);
}

int				mouse_move(int x, int y, void *param)
{
	static t_point2	prev = (t_point2){ 0, 0 };
	static int		left = 0;
	static int		middle = 0;
	static int		right = 0;

	if (param == (void *)0)
		return ((y > 0) || left ? left = !left : 0);
	else if (param == (void *)1)
		return ((y > 0) || middle ? middle = !middle : 0);
	else if (param == (void *)2)
		return ((y > 0) || right ? right = !right : 0);
	if (left)
		translate_hook(point3((x - prev.x), (y - prev.y), 0), param);
	else if (right)
		rotate_hook(point3(-(y - prev.y) * 0.001, (x - prev.x) * 0.001, 0),
			param);
	prev = (t_point2){ x, y };
	((t_fdf *)param)->mouse = prev;
	return (0);
}
