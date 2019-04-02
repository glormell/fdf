/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:17:43 by glormell          #+#    #+#             */
/*   Updated: 2019/04/02 22:22:17 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "input/input_map.h"

int				ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

size_t          x_width(char *line)
{
    size_t      width;
    char        *digit;

    width = 0;
    digit = 0;
    while (*line)
        if (!(ft_isdigit(*line) || ft_isspace(*line) || *line == '-'))
            perror("Forbidden symbol in map");
        else if (ft_isdigit(*line) && !digit)
            digit = line++;
        else if (ft_isspace(*line) && digit)
        {
            digit = 0;
            ++width;
            ++line;
        }
        else
            ++line;
    return (digit ? width + 1 : width);
}

int				*pt_lst(char *line, size_t width, int *depth)
{
    char		*l;
    int			i;
    int			*points;
    char		*z;
    char		*digit;
    
    l = line;
    if (!(points = (int *)ft_memalloc(sizeof(int *) * width)))
        perror("Memory allocation failed");
    i = 0;
    digit = 0;
    while (*l)
        if (ft_isdigit(*l) && !digit)
            digit = l++;
        else if ((ft_isspace(*l) || !*l) && digit)
        {

            z = ft_strsub(line, digit - line, l++ - digit);
            points[i] = ft_atoi(z);
			*depth = (points[i] > *depth) ? points[i] : *depth;
            digit = 0;
            i++;
        }
        else
            ++l;
    if (digit)
    {
        z = ft_strsub(line, digit - line, l++ - digit);
        points[i] = ft_atoi(z);
    }
    return (points);
}

void			pt_cat(int **p1, int **p2, size_t width, size_t height)
{
    int         *r;

    if (!(r = ft_memalloc(sizeof(int) * width * height)))
        return ;
	ft_memcpy(r, *p1, sizeof(int) * width * (height - 1));
	ft_memcpy(r + width * (height - 1), *p2, sizeof(int) * width);
	free(*p1);
	free(*p2);
	*p1 = r;
}

int				map_init(t_fdf *fdf, const int fd)
{
	char		*line;
	int			*points;
	size_t		width;
	int			height; // TODO
	int			depth;

    height = 0;
	depth = 0;
    while (get_next_line(fd, &line))
    {
		++height;
		width = x_width(line);
		points = pt_lst(line, width, &depth);
		if (height == 1 && !(fdf->map = p_map(points, width, height, depth)))
			return (0);
		else if (height > 1)
		{
			pt_cat(&fdf->map->points, &points, width, height);
			fdf->map->height = height;
			fdf->map->depth = depth;
		}
        ft_strdel(&line);
	}
	center(fdf);
	fdf->draw_map = &draw_map;
	return (1);
}
