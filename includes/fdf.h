/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:46:40 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 21:13:10 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H
#include <mlx.h>
#include "window.h"
#include "map/map.h"
#include "input/input.h"

typedef struct	s_fdf
{
	void		*mlx;
	void		*win;
	t_map		*map;
}				t_fdf;

t_fdf	*p_fdf(int fd);

#endif
