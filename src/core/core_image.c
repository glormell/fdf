/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 02:32:44 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 10:38:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_image.h"

void				put_pixel(t_fdf *fdf, t_point2c p)
{
	unsigned int	color;
	char			*canvas_data;
	int				bits;
	int				pos;

	if (!(fdf->canvas.img))
		fdf->canvas.img = mlx_new_image(fdf->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(fdf->canvas.img, &bits, &pos, &pos);
	color = mlx_get_color_value(fdf->mlx, convert_color(p.c.raw, pos));
	pos = WIN_WIDTH * (bits / 8) * (int)p.y + (int)p.x * (bits / 8);
	*((unsigned int *)(canvas_data + pos)) = color;
}