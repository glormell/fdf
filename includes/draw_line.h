/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:52 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 17:18:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_LINE_H
#define DRAW_LINE_H
#include <math.h>
#include <mlx.h>
#include "point.h"
#include "rgba.h"

void    draw_line(void *mlx, void *win, t_line l);
#endif
