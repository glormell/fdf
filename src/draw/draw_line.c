/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:28 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 22:39:45 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_line.h"

void            draw_line(t_fdf *fdf, t_line *l)
{
    t_line		*iso_l;

	iso_l = p_line(iso(l->s), iso(l->e));
	iso_l->s->x += 150;
	iso_l->e->x += 150;
	iso_l->s->y += 50;
	iso_l->e->y += 50;
	plot(fdf, iso_l);
}
