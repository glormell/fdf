/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_fdf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 19:47:14 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:10:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FDF_H
# define T_FDF_H
# include "core/t_canvas.h"
# include "appearance/t_appearance.h"
# include "map/map.h"

typedef struct		s_fdf
{
	void			*mlx;
	void			*win;
	t_map			*map;
	t_canvas		cvs;
	t_appearance	appearance;
	int				menu;
	t_point2		mouse;
	int				(*draw_map)(struct s_fdf *);
}					t_fdf;

#endif
