/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 03:27:41 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 10:08:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color/color_convert.h"

int		convert_color(int raw_color, int endian)
{
	int		converted_color;

	if (endian != ENDIAN)
	{
		converted_color = 0;
		while (raw_color)
		{
			converted_color = raw_color & 255;
			raw_color >>= 8;
			converted_color <<= 8;
		}
	}
	else
		converted_color = raw_color;

	return (converted_color);
}
