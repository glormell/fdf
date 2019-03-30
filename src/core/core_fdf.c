/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:10:42 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 03:35:48 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_fdf.h"

t_fdf		*p_fdf(int fd)
{
	t_fdf	*fdf;
 
    if (!(fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf))))
        return (NULL);
    if ((!(fdf->mlx = mlx_init())) || (!(win_init(fdf, 1000, 1000, "FdF"))) ||
		(!(hook_init(fdf))) || (!(map_init(fdf, fd))) || (!(clear_init(fdf))))
		exit(0);
	//fdf->draw_map(fdf, white());
	return (fdf);
}
