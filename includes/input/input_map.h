/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:04:54 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 02:59:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_MAP_H
#define INPUT_MAP_H
#include <stdlib.h>
#include "libft.h"
#include "core/t_fdf.h"
#include "core/core_range.h"
#include "core/core_error.h"
#include "input/get_next_line.h"
#include "map/map_point.h"
#include "map/map.h"
#include "draw/draw.h"
#include "draw/draw_map.h"

int		map_init(t_fdf *fdf, const int fd);

#endif
