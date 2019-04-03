/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:49:10 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 03:41:32 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
#define MAP_H
#include "libft.h"
#include "core/core_range.h"

typedef struct	s_map
{
    int			*points;
    size_t		width;
    size_t		height;
	t_range		depth;
}				t_map;

t_map			*p_map(int *points, size_t width, size_t height, t_range depth);

#endif
