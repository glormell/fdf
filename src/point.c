/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 05:54:24 by glormell          #+#    #+#             */
/*   Updated: 2019/03/03 22:36:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

t_point3	    *p_point3(int x, int y, int z)
{
	t_point3	*point;

	if (!(point = (t_point3 *)ft_memalloc(sizeof(t_point3))))
		return (NULL);
	point->x = x;
    point->y = y;
    point->z = z;
    return (point);
}

t_point3     point3(int x, int y, int z)
{
    return (t_point3){ x, y, z };
}

t_point2        *p_point2(int x, int y)
{
    t_point2    *point;

    if (!(point = (t_point2 *)ft_memalloc(sizeof(t_point2))))
        return (NULL);
    point->x = x;
    point->y = y;
    return (point);
}

t_point2     point2(int x, int y)
{
    return (t_point2){ x, y };
}

t_line      *p_line(t_point3 *start, t_point3 *end)
{
    t_line  *line;

    if (!(line = (t_line *)ft_memalloc(sizeof(t_line))))
        return (NULL);
    line->s = start;
    line->e = end;
    return (line);
}

t_line      line(t_point3 *start, t_point3 *end)
{
    return (t_line){ start, end };
}
