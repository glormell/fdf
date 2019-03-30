/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_point.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:08:58 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 06:42:41 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_POINT_H
#define MAP_POINT_H
#include "libft.h"
#include "color/t_color.h"

typedef struct	s_point3
{
	float		x;
	float		y;
	float		z;
}				t_point3;

typedef struct	s_point2
{
	float		x;
	float		y;
	t_color		c;
}				t_point2;

t_point3        *p_point3(float x, float y, float z);
t_point3        point3(float x, float y, float z);
t_point2        *p_point2(float x, float y, t_color c);
t_point2        point2(float x, float y, t_color c);
#endif
