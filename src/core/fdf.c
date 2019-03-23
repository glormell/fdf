/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 20:57:11 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:02:58 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/fdf.h"

t_fdf		*p_fdf(int fd)
{
	t_fdf	*fdf;
 
    if (!(fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf))))
        return (NULL);
    if ((!(fdf->mlx = mlx_init())) ||
		(!(win_init(fdf, 1000, 1000, "FdF"))) ||
		(!(map_init(fdf, fd))))
		exit(0);
	fdf->draw_map(fdf, white());
	return (fdf);
}
