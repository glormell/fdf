/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:19:39 by glormell          #+#    #+#             */
/*   Updated: 2019/03/17 16:57:51 by glormell         ###   ########.fr       */
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
   
    if ((argc != 2) ||
		((fd = open(argv[1], O_RDONLY)) == -1) || (!(mlx = mlx_init())) ||
		(!(win = win_init(mlx, 1000, 700, "FdF"))) || (!(map = get_map(fd))))
		exit(0);

    int i = -1;
    int t = 10;
    while (++i < map->width * map->height)
    {
        if ((i + 1) % map->width != 0)
		{
			t_point3 *s = p_point3(
					i % map->width * t,
					(i + 1) / map->width * t,
					map->points[i]
			);

			t_point3 *e = p_point3(
					(i + 1) % map->width * t,
					(i + 1) / map->width * t,
					map->points[i + 1]
			);

			printf("%3d %3d %3d\t", s->x, s->y, s->z);
			printf("%3d %3d %3d\n", e->x, e->y, e->z);

            draw_line(mlx, win, p_line(s, e));
		}
        if (i / map->width < map->height - 1)
		{

			t_point3 *s = p_point3(
					i % map->width * t,
					i / map->width * t,
					map->points[i]
			);

			t_point3 *e = p_point3(
					i % map->width * t,
					(i / map->width + 1) * t,
					map->points[i + map->width]
			);

			printf("%3d %3d %3d\t", s->x, s->y, s->z);
			printf("%3d %3d %3d\n", e->x, e->y, e->z);

            draw_line(mlx, win, p_line(s, e));
		}
    }
    
    mlx_loop(mlx);
    
    return (0);
}
