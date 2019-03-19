/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:59:36 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:05:27 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_H
#define ROTATE_H
#include <math.h>
#include "map/point.h"

t_point3        *rotate_x(t_point3 *p, float angle);
t_point3        *rotate_y(t_point3 *p, float angle);
t_point3        *rotate_z(t_point3 *p, float angle);
t_point3        *rotate(t_point3 *p, float x, float y, float z);
#endif
