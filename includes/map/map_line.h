/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_line.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 22:13:39 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 23:24:51 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_LINE_H
# define MAP_LINE_H
# include "map/map_point.h"

typedef struct	s_line3
{
	t_point3	s;
	t_point3	e;
}				t_line3;

typedef struct	s_line2
{
	t_point2	s;
	t_point2	e;
}				t_line2;

typedef struct	s_line2c
{
	t_point2c	s;
	t_point2c	e;
}				t_line2c;

t_line3			*p_line3(t_point3 start, t_point3 end);
t_line3			line3(t_point3 start, t_point3 end);
t_line2			*p_line2(t_point2 start, t_point2 end);
t_line2			line2(t_point2 start, t_point2 end);
t_line2c		line2c(t_point2c start, t_point2c end);

#endif
