/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:19:39 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 03:39:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int     main(int argc, char **argv)
{
    int     fd;
	t_fdf	*fdf;

	if ((argc != 2) || ((fd = open(argv[1], O_RDONLY)) == -1) ||
		!(fdf = p_fdf(fd)))
		exit(0);
    mlx_loop_hook(fdf->mlx, fdf->draw_map, fdf);
	mlx_loop(fdf->mlx);
    
    return (0);
}
