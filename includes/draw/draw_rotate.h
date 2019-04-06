/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rotate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:59:44 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:47:30 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_ROTATE_H
# define DRAW_ROTATE_H
# include <math.h>
# include "core/t_fdf.h"
# include "map/map_point.h"

t_point3		rotate_x(t_point3 p, float angle);
t_point3		rotate_y(t_point3 p, float angle);
t_point3		rotate_z(t_point3 p, float angle);
t_point3		rotate(t_fdf *fdf, t_point3 p);

#endif
