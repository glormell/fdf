/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:12:24 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:12:44 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_line.h"

void            draw_line(t_fdf *fdf, t_line *l, int clr)
{
    t_line		*iso_l;

	iso_l = p_line(proj(l->s), proj(l->e));
	iso_l->s->x *= fdf->t->z;
	iso_l->s->x += fdf->t->x;
	iso_l->e->x *= fdf->t->z;
	iso_l->e->x += fdf->t->x;
	iso_l->s->y *= fdf->t->z;
	iso_l->s->y += fdf->t->y;
	iso_l->e->y *= fdf->t->z;
	iso_l->e->y += fdf->t->y;
	plot(fdf, iso_l, clr);
}
