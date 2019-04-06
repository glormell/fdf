/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 22:14:49 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:15:21 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H
# include "libft.h"
# include "core/core_range.h"

typedef struct	s_map
{
	int			*points;
	size_t		width;
	size_t		height;
	t_range		depth;
}				t_map;

t_map			*p_map(int *points, size_t width, size_t height, t_range depth);

#endif
