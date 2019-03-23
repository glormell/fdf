/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:14:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 21:23:59 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
#define INPUT_H
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include "core/t_fdf.h"
#include "draw/center.h"
#include "input/get_next_line.h"
#include "map/point.h"
#include "map/map.h"
#include "draw/map.h"
#define ft_isspace(c)	((c) == ' ' || ((c) >= '\t' && (c) <= '\r'))

int		map_init(t_fdf *fdf, const int fd);
#endif
