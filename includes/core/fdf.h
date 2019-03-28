/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:46:40 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 20:39:43 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H
#include <mlx.h>
#include "core/t_fdf.h"
#include "core/window.h"
#include "map/map.h"
#include "input/map.h"

t_fdf	*p_fdf(int fd);

#endif