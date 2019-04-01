/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:18:57 by glormell          #+#    #+#             */
/*   Updated: 2019/03/31 06:11:09 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_line.h"

t_line3		*p_line3(t_point3 start, t_point3 end)
{
    t_line3	*line;

    if (!(line = (t_line3 *)ft_memalloc(sizeof(t_line3))))
        return (NULL);
    line->s = start;
    line->e = end;
    return (line);
}

t_line3      line3(t_point3 start, t_point3 end)
{
    return (t_line3){ start, end };
}

t_line2		*p_line2(t_point2 start, t_point2 end)
{
    t_line2	*line;

    if (!(line = (t_line2 *)ft_memalloc(sizeof(t_line2))))
        return (NULL);
    line->s = start;
    line->e = end;
    return (line);
}

t_line2		line2(t_point2 start, t_point2 end)
{
    return (t_line2){ start, end };
}

t_line2c	*p_line2c(t_point2c start, t_point2c end)
{
    t_line2c	*line;

    if (!(line = (t_line2c *)ft_memalloc(sizeof(t_line2c))))
        return (NULL);
    line->s = start;
    line->e = end;
    return (line);
}

t_line2c	line2c(t_point2c start, t_point2c end)
{
    return (t_line2c){ start, end };
}
