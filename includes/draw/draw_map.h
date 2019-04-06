/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:57:00 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:46:59 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_MAP_H
# define DRAW_MAP_H
# include "core/t_fdf.h"
# include "core/core_canvas.h"
# include "color/t_color.h"
# include "map/map_point.h"
# include "draw/draw_line.h"

int		draw_map(t_fdf *fdf);
#endif
