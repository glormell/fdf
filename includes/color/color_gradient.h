/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_gradient.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:09:41 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 14:00:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_GRADIENT_H
# define COLOR_GRADIENT_H
# include "appearance/t_appearance.h"
# include "color/t_color.h"
# include "color/color_rgba.h"

t_color		line_gradient(t_line2c l, t_point2c c, t_point2 d);
t_color		color_gradient(t_appearance a, double f);

#endif
