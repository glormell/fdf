/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:19:39 by glormell          #+#    #+#             */
/*   Updated: 2019/03/07 04:17:50 by glormell         ###   ########.fr       */
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
		(!(win = win_init(mlx, 1500, 1100, "FdF"))) || (!(map = get_map(fd))))
		exit(0);

    int i = -1;
    printf("%zu\n", map->len);
    while (++i < map->len)
    {
        t_point3  *p = map->points[i];
        printf("%d. %d:%d:%d\n", i, p->x, p->y, p->z);
        //draw_line(mlx, win, p_line(p, p));
    }

    mlx_pixel_put(mlx, win, 750, 550, rgba(0, 255, 255, 1));
    //draw_line(mlx, win, p_line(p_point3(0, 0, 0), p_point3(100, 100, 0)));
    
    mlx_loop(mlx);
    
    return (0);
}
