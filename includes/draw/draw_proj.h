/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_proj.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:58:27 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:47:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_PROJ_H
# define DRAW_PROJ_H
# include <math.h>
# include "core/t_fdf.h"
# include "color/color.h"
# include "map/map_point.h"

t_point2c	proj(t_fdf *fdf, t_point3 p);

#endif
