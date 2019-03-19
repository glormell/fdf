/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iso.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:08:06 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:07:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/iso.h"

t_point3	    *iso(t_point3 *p)
{
	t_point3	*n;

	n = p_point3(
		(p->x - p->y) * cos(0.523599),
		(p->x + p->y) * sin(0.523599) - p->z,
		0
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
