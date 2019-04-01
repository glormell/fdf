/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:10:42 by glormell          #+#    #+#             */
/*   Updated: 2019/04/01 09:41:34 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_fdf.h"

t_fdf		*p_fdf(int fd)
{
	t_fdf	*fdf;
 
    if (!(fdf = (t_fdf *)ft_memalloc(sizeof(t_fdf))))
        return (NULL);
    if ((!(fdf->mlx = mlx_init())) ||
		(!(win_init(fdf, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(fdf))) || (!(map_init(fdf, fd))) ||
		(!(clear_canvas(fdf))) || (!(appearance_init(fdf))))
		exit(0);
	return (fdf);
}
