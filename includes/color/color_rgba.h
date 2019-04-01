/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_rgba.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 06:07:49 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 06:25:37 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_RGBA_H
#define COLOR_RGBA_H
#include <math.h>
#include "color/t_color.h"
#include "map/map_point.h"
#include "map/map_line.h"

t_color		rgba(unsigned char r, unsigned char g,
					unsigned char b, unsigned char a);

#endif
