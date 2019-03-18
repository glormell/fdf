/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:52 by glormell          #+#    #+#             */
/*   Updated: 2019/03/17 21:31:04 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_LINE_H
#define DRAW_LINE_H
#include <mlx.h>
#include "point.h"
#include "rgba.h"

t_point2	*convert(t_point3 *point, t_point3 *camera, t_point3 *rotate);
void		draw_line(void *mlx, void *win, t_line *l);
#endif
