/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_palette.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 06:45:46 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:54:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color/color_palette.h"

t_color		black(void)
{
	return (rgba(0, 0, 0, 255));
}

t_color		white(void)
{
	return (rgba(255, 255, 255, 255));
}
