/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_appearance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 05:47:20 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:00:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_appearance.h"

t_appearance	appearance(t_color base, t_color positive, t_color negative,
	char *name)
{
	return ((t_appearance){base, positive, negative, name});
}

int				appearance_init(t_fdf *fdf)
{
	fdf->appearance = default_appearance();
	return (1);
}
