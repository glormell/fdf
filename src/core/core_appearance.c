/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_appearance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 05:47:20 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 07:08:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_appearance.h"

t_appearance	appearance(t_color base, t_color positive, t_color negative)
{
	return ((t_appearance){base, positive, negative});
}

int				appearance_init(t_fdf *fdf)
{
	fdf->appearance = 
		appearance(white(), rgba(92, 184, 92, 255), rgba(216, 99, 111, 255));
	return (1);
}
