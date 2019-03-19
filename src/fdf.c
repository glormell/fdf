/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 20:57:11 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 21:17:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_fdf		*p_fdf(int fd)
{
	t_fdf	*fdf;
 
    if (!(fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf))))
        return (NULL);
    if ((!(fdf->mlx = mlx_init())) ||
		(!(fdf->win = win_init(fdf->mlx, 1000, 1000, "FdF"))) ||
		(!(fdf->map = get_map(fd))))
		exit(0);
	return (fdf);
}
