/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:19:39 by glormell          #+#    #+#             */
/*   Updated: 2019/02/26 03:56:32 by glormell         ###   ########.fr       */
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
    t_point *point;
   
    if (argc != 2)
        exit(0);
    if ((fd = open(argv[1], O_RDONLY)) == -1)
        exit(0);
    if (!(mlx = mlx_init()))
        exit(0);
    if (!(win = win_init(mlx, 500, 500, "FdF")))
        exit(0);
    if (!(map = get_map(fd)))
        exit(0);
    int i = 0;
    //printf("%zu\n", map->len);
    /*while (i < map->len)
    {
        point = map->points[i];
        printf("%d\t%d\t%d\n", point->x, point->y, point->z);
        i++;
    }*/
    //draw_line(mlx, win, line(points[0], points[17]));
    
    mlx_loop(mlx);
    
    return (0);
}
