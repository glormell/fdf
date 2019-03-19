/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 05:54:24 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 22:10:21 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/point.h"

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

t_point2        *p_point2(float x, float y)
{
    t_point2    *point;

    if (!(point = (t_point2 *)ft_memalloc(sizeof(t_point2))))
        return (NULL);
    point->x = x;
    point->y = y;
    return (point);
}

t_point2     point2(float x, float y)
{
    return (t_point2){ x, y };
}
