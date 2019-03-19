/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:53:27 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:08:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map.h"

t_map       *p_map(int *points, size_t width, size_t height)
{
    t_map   *map;

    if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
        return (NULL);
    map->points = points;
    map->width = width;
    map->height = height;
    return (map);
}
