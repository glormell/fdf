/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:53:27 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 03:29:31 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map/map.h"

t_map		*p_map(int *points, size_t width, size_t height, t_range depth)
{
	t_map	*map;

    if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
        return (NULL);
	map->points = points;
	map->width = width;
	map->height = height;
	map->depth = depth;
	return (map);
}
