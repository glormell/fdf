/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proj.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 14:52:07 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 15:13:12 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/proj.h"

t_point3	*proj(t_point3 *p)
{
	t_point3	*n;

	n = p_point3(
		p->x,//(p->x - p->y) * cos(1 * M_PI / 180),
		p->y,//(p->x + p->y) * sin(1 * M_PI / 180) - p->z,
		0
	);

	return (n);
}