/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:39:11 by glormell          #+#    #+#             */
/*   Updated: 2019/03/03 22:41:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H
#include "libft.h"

typedef struct  s_point3
{
	int         x;
	int         y;
	int         z;
}               t_point3;

typedef struct  s_point2
{
	int         x;
	int         y;
}               t_point2;

typedef struct  s_line
{
	t_point3    *s;
	t_point3    *e;
}               t_line;

t_point3        *p_point3(int x, int y, int z);
t_point3        point3(int x, int y, int z);
t_point2        *p_point2(int x, int y);
t_point2        point2(int x, int y);
t_line          *p_line(t_point3 *start, t_point3 *end);
t_line          line(t_point3 *start, t_point3 *end);
#endif
