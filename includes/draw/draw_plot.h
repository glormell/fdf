/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_plot.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:56:02 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:48:12 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_PLOT_H
# define DRAW_PLOT_H
# include <math.h>
# include "mlx.h"
# include "constants.h"
# include "core/t_fdf.h"
# include "core/core_image.h"
# include "color/t_color.h"
# include "color/color.h"
# include "map/map_point.h"
# include "map/map_line.h"

void	plot(t_fdf *fdf, t_line2c l);

#endif
