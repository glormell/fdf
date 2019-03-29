/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rgba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:14:37 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:14:41 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw_rgba.h"

int         rgba(int red, int green, int blue, float alpha)
{
    float   alphaRed;
    float   alphaGreen;
    float   alphaBlue;

    alphaRed = red * alpha;
    alphaGreen = green * alpha;
    alphaBlue = blue * alpha;

    red = (int)floor(alphaRed) << 16;
    green = (int)floor(alphaGreen) << 8;
    blue = (int)floor(alphaBlue);

    return (red + green + blue);
}

int			white()
{
	return (rgba(255, 255, 255, 1));
}

int			clear()
{
	return (rgba(0, 0, 0, 1));
}
