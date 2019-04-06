/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:10:42 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:57:42 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_fdf.h"

t_fdf		*p_fdf(int fd)
{
	t_fdf	*fdf;

	if (!(fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf))))
		return (0);
	if ((!(fdf->mlx = mlx_init())) ||
		(!(win_init(fdf, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(fdf))) || (!(map_init(fdf, fd))) ||
		(!(canvas_init(fdf))) || (!(appearance_init(fdf))))
		exit(0);
	fdf->mouse = point2(WIN_WIDTH / 2, WIN_HEIGHT / 2);
	return (fdf);
}
