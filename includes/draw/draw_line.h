/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:52 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:48:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_LINE_H
# define DRAW_LINE_H
# include "mlx.h"
# include "color/t_color.h"
# include "color/color.h"
# include "map/map_point.h"
# include "map/map_line.h"
# include "draw/draw_rotate.h"
# include "draw/draw_iso.h"
# include "draw/draw_proj.h"
# include "draw/draw_plot.h"

t_point2	convert(t_point3 point, t_point3 camera, t_point3 rotate);
void		draw_line(t_fdf *fdf, t_line3 l);

#endif
