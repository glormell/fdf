/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:28 by glormell          #+#    #+#             */
/*   Updated: 2019/03/18 13:57:26 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "draw_line.h"

t_point3        *rotate_x(t_point3 *p, float angle)
{
    t_point3    *n;

    n = p_point3(
        p->x,
        p->y * cos(angle) + p->z * sin(angle),
        -p->y * sin(angle) + p->z * cos(angle)
    );

    return (n);
}

t_point3        *rotate_y(t_point3 *p, float angle)
{
    t_point3    *n;

    n = p_point3(
        p->x * cos(angle) + p->z * sin(angle),
        p->y,
        -p->x * sin(angle) + p->z * cos(angle)
    );

    return (n);
}

t_point3        *rotate_z(t_point3 *p, float angle)
{
    t_point3    *n;

    n = p_point3(
        p->x * cos(angle) - p->y * sin(angle),
        p->x * sin(angle) + p->y * cos(angle),
        p->z
    );

    return (n);
}

t_point3        *rotate(t_point3 *p, float x, float y, float z)
{
    return (rotate_x(rotate_y(rotate_z(p, z), y), x));
}

t_point2	    *iso(t_point3 *p)
{
	t_point2	*n;

	n = p_point2(
		(p->x - p->y) * cos(0.523599),
		(p->x + p->y) * sin(0.523599) - p->z
	);

	return (n);
}

t_point2        *iso2(t_point3 *p, t_point2 *origin)
{
    t_point2    *cartesian;
    t_point2    *flash;

    cartesian = p_point2(
        (p->x - p->z) * cos(0.523599),
        p->y + (p->x + p->z) * sin(0.523599)
    );

    flash = p_point2(
        cartesian->x + origin->x,
        -cartesian->y + origin->y
    );

    return (flash);
}

void            *g_mlx;
void            *g_win;

double          absolute(double x)
{
    return (x < 0) ? -x : x;
}

int             iPartOfNumber(double x)
{
    return ((int)x);
}

int             roundNumber(double x)
{
    return (iPartOfNumber(x + 0.5));
}

double          fPartOfNumber(double x)
{
    return (x - iPartOfNumber(x));
}

double          rfPartOfNumber(double x)
{
    return (1 - fPartOfNumber(x));
}

void            swap(int *a, int *b)
{
    int         temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void drawPixel(int x, int y, float c)
{
    mlx_pixel_put(g_mlx, g_win, x, y, rgba(255, 255, 255, c));
}

void            draw_wu(int x0 , int y0 , int x1 , int y1)
{
    int steep = absolute(y1 - y0) > absolute(x1 - x0) ;

    // swap the co-ordinates if slope > 1 or we
    // draw backwards
    if (steep)
    {
        swap(&x0 , &y0);
        swap(&x1 , &y1);
    }
    if (x0 > x1)
    {
        swap(&x0 ,&x1);
        swap(&y0 ,&y1);
    }

    //compute the slope
    float dx = x1-x0;
    float dy = y1-y0;
    float gradient = dy/dx;
    if (dx == 0.0)
        gradient = 1;

    int xpxl1 = x0;
    int xpxl2 = x1;
    float intersectY = y0;

    // main loop
    if (steep)
    {
        int x;
        for (x = xpxl1 ; x <=xpxl2 ; x++)
        {
            // pixel coverage is determined by fractional
            // part of y co-ordinate
            drawPixel(iPartOfNumber(intersectY), x,
                    rfPartOfNumber(intersectY));
            drawPixel(iPartOfNumber(intersectY)-1, x,
                    fPartOfNumber(intersectY));
            intersectY += gradient;
        }
    }
    else
    {
        int x;
        for (x = xpxl1 ; x <=xpxl2 ; x++)
        {
            // pixel coverage is determined by fractional
            // part of y co-ordinate
            drawPixel(x, iPartOfNumber(intersectY),
                    rfPartOfNumber(intersectY));
            drawPixel(x, iPartOfNumber(intersectY)-1,
                    fPartOfNumber(intersectY));
            intersectY += gradient;
        }
    }

}

void            draw_line(void *mlx, void *win, t_line *l)
{
    t_point2    *s;
    t_point2    *e;
 
    g_mlx = mlx;
    g_win = win;

    float angle = 0.523599;
    s = iso(rotate(l->s, 0/*.523599*/, angle/*.523599*/, 0));
    e = iso(rotate(l->e, 0/*.523599*/, angle/*.523599*/, 0));
    
    //s = iso2(l->s, p_point2(150, 350));
    //e = iso2(l->e, p_point2(150, 350));
    
    draw_wu(s->x, s->y, e->x, e->y);
    /*drawPixel(100, 100, 1);
    drawPixel(101, 100, 0.9);
    drawPixel(102, 100, 0.8);
    drawPixel(103, 100, 0.7);
    drawPixel(104, 100, 0.6);
    drawPixel(105, 100, 0.5);
    drawPixel(106, 100, 0.4);
    drawPixel(107, 100, 0.3);
    drawPixel(108, 100, 0.2);
    drawPixel(109, 100, 0.1);
    drawPixel(110, 100, 0);*/
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

    s = iso(rotate(l->s, 30, 30, 30));
    e = iso(rotate(l->e, 30, 30, 30));

    //printf("%d\t%d\t%d\n", l->s->x, l->s->y, l->s->z);
    //printf("%d\t%d\n\n", s->x, s->y);
    //printf("%d\t%d\t%d\n", l->e->x, l->e->y, l->e->z);
    //printf("%d\t%d\n", e->x, e->y);

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
