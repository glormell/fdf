/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:48:28 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 17:17:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "draw_line.h"

void        draw_line(void *mlx, void *win, t_line l)
{
    t_point d;
    double  g;
    double  i;
    double  intpart;
    double  f;

    printf("%d\t%d\n", l.e.x, l.e.y);
    d = (t_point){ l.s.x - l.e.x, l.s.y - l.e.y };
    d.x = (int)fabs((double)d.x);
    d.y = (int)fabs((double)d.y);
    g = d.x / d.y;
    mlx_pixel_put(mlx, win, l.s.x, l.s.y, rgba(255, 255, 255, 0.5));
    mlx_pixel_put(mlx, win, l.s.x, l.s.y + 1, rgba(255, 255, 255, 0));
    i = l.s.y + g;
    mlx_pixel_put(mlx, win, l.e.x, l.e.y, rgba(255, 255, 255, 0.5));
    mlx_pixel_put(mlx, win, l.e.x, l.e.y + 1, rgba(255, 255, 255, 0));
    d.x = l.s.x + 1;
    while (d.x < l.e.x)
    {
        f = modf(i, &intpart);
        mlx_pixel_put(mlx, win, d.x, (int)i, rgba(255, 255, 255, 1 - f));
        mlx_pixel_put(mlx, win, d.x, (int)i + 1, rgba(255, 255, 255, f));
        i += g;
        ++d.x;
    }
}
