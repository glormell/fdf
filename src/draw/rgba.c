/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 05:07:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:48:41 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/rgba.h"

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
	return rgba(255, 255, 255, 1);
}
