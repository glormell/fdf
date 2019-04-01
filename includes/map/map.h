/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:49:10 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 04:06:29 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
#define MAP_H
#include "libft.h"

typedef struct	s_map
{
    int			*points;
    size_t		width;
    size_t		height;
	int			depth;
}				t_map;

t_map			*p_map(int *points, size_t width, size_t height, int depth);

#endif
