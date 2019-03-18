/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:39:44 by glormell          #+#    #+#             */
/*   Updated: 2019/03/18 00:57:28 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "input.h"

t_map       *p_map(int *points, size_t width, size_t height)
{
    t_map   *map;

    if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
        return (NULL);
    map->points = points;
    map->width = width;
    map->height = height;
    return (map);
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

int        *pt_lst(char *line, size_t width)
{
    char        *l;
    int         i;
    int         *points;
    char        *z;
    char        *digit;
    
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

int     *pt_cat(int *p1, int *p2, size_t width, size_t height)
{
    int         *r;

    if (!(r = ft_memalloc(sizeof(int) * width * height)))
        return (NULL);

	ft_memcpy(r, p1, sizeof(int) * width * (height - 1));
	ft_memcpy(r + width * (height - 1), p2, sizeof(int) * width);

    return (r);
}

t_map           *get_map(const int fd)
{
    char        *line;
    int         *points;
    size_t      width;
    int         height;
    t_map       *map;

    height = 0;
    while (get_next_line(fd, &line))
    {
        ++height;
        width = x_width(line);
        points = pt_lst(line, width);
        if (height == 1)
            map = p_map(points, width, height);
        else if (height > 1)
        {
            map->points = pt_cat(map->points, points, width, height);
            map->height = height;
        }
    }
    return (map);
}
