/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgba.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 05:07:05 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 05:09:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rgba.h"

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
