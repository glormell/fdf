/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:13:50 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:08:38 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/line.h"

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
