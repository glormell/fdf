/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_proj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:14:09 by glormell          #+#    #+#             */
/*   Updated: 2019/04/04 01:53:09 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_proj.h"

t_point2c		proj(t_fdf *fdf, t_point3 p)
{
	t_point2c	n;

	n = point2c(
		p.x + (fdf->map->width / 2),
		p.y + (fdf->map->height / 2),
		white()
	);

	return (n);
}
