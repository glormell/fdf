/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 03:33:22 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 09:38:30 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_clear.h"

int					clear_canvas(t_fdf *fdf)
{
	char			*canvas_data;
	int				bits;
	int				len;

	if (!(fdf->canvas.img))
		fdf->canvas.img = mlx_new_image(fdf->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(fdf->canvas.img, &bits, &len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 8);
	while (len--)
		*(canvas_data++) = 0;
	return (1);
}
