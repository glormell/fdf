/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_fdf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 19:47:14 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 03:47:05 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FDF_H
#define T_FDF_H
#include "map/map_point.h"
#include "map/map.h"

typedef struct	s_fdf
{
	void		*mlx;
	void		*win;
	t_map		*map;
	t_point3	t;
	t_point3	r;
	int			changed;
	void		*clear;
	int			(*draw_map)(void *, int);
}				t_fdf;

#endif
