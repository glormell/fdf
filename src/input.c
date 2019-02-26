/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:39:44 by glormell          #+#    #+#             */
/*   Updated: 2019/02/26 04:09:54 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "input.h"

t_map       *p_map(t_point **points, size_t len)
{
    t_map   *map;

    if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
        return (NULL);
    map->points = points;
    map->len = len;
    return (map);
}

size_t          x_len(char *line)
{
    size_t      len;
    char        *digit;

    len = 0;
    digit = 0;
    while (*line)
        if (!(ft_isdigit(*line) || ft_isspace(*line)))
            perror("Forbidden symbol in map");
        else if (ft_isdigit(*line) && !digit)
            digit = line++;
        else if (ft_isspace(*line) && digit)
        {
            digit = 0;
            ++len;
            ++line;
        }
        else
            ++line;
    return (digit ? len + 1 : len);
}

t_point        **pt_lst(char *line, size_t len, int *y)
{
    char        *l;
    int         i;
    t_point     **points;
    char        *z;
    char        *digit;
    
    l = line;
    if (!(points = (t_point **)ft_memalloc(sizeof(t_point *) * len)))
        perror("Memory allocation failed");
    i = 0;
    digit = 0;
    while (*l)
        if (ft_isdigit(*l) && !digit)
            digit = l++;
        else if ((ft_isspace(*l) || !*l) && digit)
        {
            z = ft_strsub(line, digit - line, l++ - digit);
            points[i] = p_point(i, *y, ft_atoi(z));
            digit = 0;
            i++;
        }
        else
            ++l;
    if (digit)
        points[i] = p_point(i, *y, ft_atoi(z));
    ++*y;
    return (points);
}

t_point         **pt_cat(t_point **p1, t_point **p2, size_t len)
{
    int         i;
    int         l2;
    t_point     **r;

    l2 = len * 2;
    if (!(r = ft_memalloc(sizeof(t_point *) * l2)))
        return (NULL);

    i = -1;
    while (++i < len)
    {
        r[i] = p_point(p1[i]->x, p1[i]->y, p1[i]->z);
    }
    while (++i < l2)
    {
        r[i] = p_point(p2[i - len]->x, p2[i - len]->y, p2[i - len]->z);
    }

    i = -1;
    while (++i < l2)
        printf("%d\t%d\t%d\n|||\n", r[i]->x, r[i]->y, r[i]->z);
    
    return (r);
}

t_map           *get_map(const int fd)
{
    char        *line;
    t_point     **points;
    size_t      len;
    int         y;
    t_map       *map;

    y = 0;
    while (get_next_line(fd, &line))
    {
        len = x_len(line);
        if (!y)
        {
            points = pt_lst(line, len, &y);
            map = p_map(points, len * y);
        }
        else if (y == 1)
        {
            points = pt_lst(line, len, &y);
            pt_cat(map->points, points, len);
            //map->points = points;
            //map->len = len * y;
        }
    }
    return (map);
}
