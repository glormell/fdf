/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 19:15:32 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:06:27 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_H
#define LINE_H
#include "map/point.h"

typedef struct  s_line
{
	t_point3    *s;
	t_point3    *e;
}               t_line;


t_line          *p_line(t_point3 *start, t_point3 *end);
t_line          line(t_point3 *start, t_point3 *end);

#endif
