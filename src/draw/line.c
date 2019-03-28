/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:37:38 by glormell          #+#    #+#             */
/*   Updated: 2019/03/28 23:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/line.h"

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
