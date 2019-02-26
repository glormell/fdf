/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 05:54:24 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 18:19:12 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "point.h"

t_point	    *p_point(int x, int y, int z)
{
	t_point	*point;

	if (!(point = (t_point *)ft_memalloc(sizeof(t_point))))
		return (NULL);
	point->x = x;
    point->y = y;
    point->z = z;
    return (point);
}

t_point     point(int x, int y, int z)
{
    return (t_point){ x, y, z };
}

t_line      *p_line(t_point *start, t_point *end)
{
    t_line  *line;

    if (!(line = (t_line *)ft_memalloc(sizeof(t_line))))
        return (NULL);
    line->s = *start;
    line->e = *end;
    return (line);
}

t_line      line(t_point start, t_point end)
{
    return (t_line){ start, end };
}
