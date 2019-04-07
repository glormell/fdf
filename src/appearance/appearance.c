/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   appearance.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:59:24 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 13:59:25 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "appearance/appearance.h"

int				appearance_init(t_fdf *fdf)
{
	fdf->appearance = default_appearance();
	return (1);
}
