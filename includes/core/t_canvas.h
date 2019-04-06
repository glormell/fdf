/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_canvas.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 04:37:31 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:49:21 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_CANVAS_H
# define T_CANVAS_H
# include "map/map_point.h"

typedef struct	s_canvas
{
	void		*img;
	t_point3	t;
	t_point3	r;
	float		w;
	float		h;
	float		zscale;
	int			changed;
}				t_canvas;

#endif
