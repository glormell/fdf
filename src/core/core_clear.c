/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 03:33:22 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 04:46:48 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_clear.h"

int			clear_init(t_fdf *fdf)
{
	int		width;
	int		height;
	char	**xpm_clear;
	int		i;
	int		j;
	
	width = 1000;
	height = 1002;
	xpm_clear = ft_memalloc(height * sizeof(char *));
	i = 0;
	j = -1;
	xpm_clear[i++] = "1000 1000 1 1";
	xpm_clear[i] = ". c #000000";
	while (++i < height)
	{
		xpm_clear[i] = ft_memalloc(width * sizeof(char));
		while(++j < width)
			xpm_clear[i][j] = '.';
	}
	height -= 2;
	fdf->clear = mlx_xpm_to_image(fdf->mlx, xpm_clear, &width, &height);
    height += 2;
	i = 1;
	while (++i < height)
		free(xpm_clear[i]);
	free(xpm_clear);
	return (fdf->clear != (void *)0);
}
