/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:19:25 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 06:36:44 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_point.h"

t_point3	    *p_point3(float x, float y, float z)
{
	t_point3	*point;

	if (!(point = (t_point3 *)ft_memalloc(sizeof(t_point3))))
		return (NULL);
	point->x = x;
    point->y = y;
    point->z = z;
    return (point);
}

t_point3     point3(float x, float y, float z)
{
    return (t_point3){ x, y, z };
}

t_point2        *p_point2(float x, float y, t_color c)
{
    t_point2    *point;

    if (!(point = (t_point2 *)ft_memalloc(sizeof(t_point2))))
        return (NULL);
    point->x = x;
    point->y = y;
	point->c = c;
    return (point);
}

t_point2     point2(float x, float y, t_color c)
{
    return (t_point2){ x, y, c };
}
