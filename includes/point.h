/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 02:39:11 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 18:18:40 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

typedef struct  s_point
{
	int         x;
	int         y;
    int         z;
}				t_point;

typedef struct  s_line
{
    t_point     s;
    t_point     e;
}               t_line;

t_point	*p_point(int x, int y, int z);
t_point	point(int x, int y, int z);
t_line  *p_line(t_point *start, t_point *end);
t_line  line(t_point start, t_point end);
#endif
