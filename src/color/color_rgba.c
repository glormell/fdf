/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_rgba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 06:07:09 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 06:25:28 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color/color_rgba.h"

int			raw_color(unsigned char r, unsigned char g,
						unsigned char b, unsigned char a)
{
	return ((r << 16) + (g << 8) + b);
}

t_color		rgba(unsigned char r, unsigned char g,
					unsigned char b, unsigned char a)
{
    return ((t_color){r, g, b, a, raw_color(r, g, b, a)});
}
