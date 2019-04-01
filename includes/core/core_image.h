/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_image.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 02:33:00 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 10:02:29 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_IMAGE_H
#define CORE_IMAGE_H
#include <mlx.h>
#include "constants.h"
#include "core/t_fdf.h"
#include "color/color_convert.h"

void		put_pixel(t_fdf *fdf, t_point2c p);

#endif
