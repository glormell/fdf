/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:18:57 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:19:00 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map_line.h"

t_line		*p_line(t_point3 *start, t_point3 *end)
{
    t_line	*line;

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
