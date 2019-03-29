/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:14:56 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:15:00 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_rotate.h"

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

t_point3        *rotate(t_point3 *p, t_point3 *r)
{
	return (rotate_x(rotate_y(rotate_z(p, r->z), r->y), -r->x));
}