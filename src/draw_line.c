/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:28 by glormell          #+#    #+#             */
/*   Updated: 2019/03/07 03:27:27 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "draw_line.h"

static t_point2	*iso(t_point3 *p)
{
	t_point2	*n;

	n = p_point2(
		(p->x - p->y) * cos(0.523599),
		-p->z + (p->x + p->y) * sin(0.523599)
	);

	return (n);
}

void            draw_line(void *mlx, void *win, t_line *l)
{
    t_point2    *s;
    t_point2    *e;
    t_point2    *d;
    t_point2    *r;
    int         p;
 
    s = iso(l->s);
    e = iso(l->e);

    //printf("%d\t%d\t%d\n", l->s->x, l->s->y, l->s->z);
    //printf("%d\t%d\n\n", s->x, s->y);
    //printf("%d\t%d\t%d\n", l->e->x, l->e->y, l->e->z);
    //printf("%d\t%d\n", e->x, e->y);

    //mlx_pixel_put(mlx, win, s->x * 40, s->y * 40, rgba(0, 255, 255, 1));

    /*d = p_point2(s->x - s->x, e->y - s->y);
    r = p_point2(s->x, s->y);
 
	p = 2 * d->y - d->x;
 
	while (r->x < e->x)
	{
		if (p >= 0)
		{
            mlx_pixel_put(mlx, win, r->x, r->y, rgba(255, 255, 255, 1));
			r->y = r->y + 1;
			p = p + 2 * d->y - 2 * d->x;
		}
		else
		{
            mlx_pixel_put(mlx, win, r->x, r->y, rgba(255, 255, 255, 1));
			p = p + 2 * d->y;
		}
		r->x = r->x + 1;
	}*/
}

void            _draw_line(void *mlx, void *win, t_line *l)
{
    t_point2    *d;
    t_point2    *s;
    t_point2    *e;
    double      g;
    double      i;
    double      intpart;
    double      f;

    s = iso(l->s);
    e = iso(l->e);

    printf("%d\t%d\t%d\n", l->s->x, l->s->y, l->s->z);
    printf("%d\t%d\n\n", s->x, s->y);
    printf("%d\t%d\t%d\n", l->e->x, l->e->y, l->e->z);
    printf("%d\t%d\n", e->x, e->y);

    d = p_point2(s->x - e->x, s->y - e->y);
    d->x = (int)fabs((double)d->x);
    d->y = (int)fabs((double)d->y);
    g = d->x / d->y;
    mlx_pixel_put(mlx, win, s->x, s->y, rgba(255, 255, 255, 0.5));
    mlx_pixel_put(mlx, win, s->x, s->y + 1, rgba(255, 255, 255, 0));
    i = s->y + g;
    mlx_pixel_put(mlx, win, e->x, e->y, rgba(255, 255, 255, 0.5));
    mlx_pixel_put(mlx, win, e->x, e->y + 1, rgba(255, 255, 255, 0));
    d->x = s->x + 1;
    while (d->x < e->x)
    {
        f = modf(i, &intpart);
        mlx_pixel_put(mlx, win, d->x, (int)i, rgba(255, 255, 255, 1 - f));
        mlx_pixel_put(mlx, win, d->x, (int)i + 1, rgba(255, 255, 255, f));
        i += g;
        ++d->x;
    }
}
