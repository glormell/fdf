/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 22:46:55 by glormell          #+#    #+#             */
/*   Updated: 2019/02/26 00:10:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "window.h"

int         close_hook(void *param)
{
    (void)param;
    exit(0);

    return (0);
}

int         key_hook(int key, void *param)
{
    if (key == 53 || key == 12)
        close_hook(param);
    
    return (0);
}

void        *win_init(void *mlx, int width, int height, char *title)
{
    void    *win;

    win = mlx_new_window(mlx, width, height, title);
    mlx_key_hook(win, key_hook, (void *)0);
    mlx_hook(win, 17, (1L << 17), close_hook, (void *)0);
    
    return (win);
}
