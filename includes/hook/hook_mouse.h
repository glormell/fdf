/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:46:16 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 23:22:10 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MOUSE_H
# define HOOK_MOUSE_H
# include "map/map_point.h"
# include "hook/codes/mouse_codes.h"
# include "hook/hook_translate.h"
# include "hook/hook_rotate.h"

t_point2	canvas_mouse(t_fdf *fdf);
int			mouse_press(int button, int x, int y, void *param);
int			mouse_release(int button, int x, int y, void *param);
int			mouse_move(int x, int y, void *param);

#endif
