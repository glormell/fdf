/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:19:39 by glormell          #+#    #+#             */
/*   Updated: 2019/03/05 22:29:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "main.h"

int     main(int argc, char **argv)
{
    void    *mlx;
    void    *win;
    int     fd;
    t_map   *map;
    t_point3 *point;
   
    if ((argc != 2) ||
		((fd = open(argv[1], O_RDONLY)) == -1) || (!(mlx = mlx_init())) ||
		(!(win = win_init(mlx, 500, 500, "FdF"))) || (!(map = get_map(fd))))
		exit(0);

    int i = -1;
    //printf("%zu\n", map->len);
    /*while (++i < map->len)
    {
        point = map->points[i];
        printf("%d\t%d\t%d\n", point->x, point->y, point->z);
    }*/

    draw_line(mlx, win, p_line(p_point3(500, 100, 0), p_point3(500, 200, 0)));
    
    mlx_loop(mlx);
    
    return (0);
}
