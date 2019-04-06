/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:33:28 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 01:22:09 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input/input_lst.h"

int				put_point(int *points, char *ln, int from, int to)
{
	char		*z;

	if (!points)
		return (0);
	z = ft_strsub(ln, from, to);
	*points = ft_atoi(z);
	free(z);
	return (1);
}

int				change_range(int point, t_range *d, char **digit, int *m)
{
	if (d)
		*d = range((point < (*d).min) ? point : (*d).min,
			(point > (*d).max) ? point : (*d).max);
	if (digit)
		*digit = 0;
	if (m)
		*m = 0;
	return (1);
}

int				*pt_lst(char *ln, size_t w, t_range *d)
{
	char		*l;
	int			i;
	int			*points;
	char		*digit;
	int			m;

	l = ln;
	if (!(points = (int *)ft_memalloc(sizeof(int *) * w)))
		xerror(1, "Memory allocation failed");
	i = 0;
	digit = 0;
	m = 0;
	while (*l)
		if (ft_isdigit(*l) && !digit)
			digit = ((m ? -1 : 0)) + l++;
		else if (*l == '-' && !m)
			m = 1;
		else if ((ft_isspace(*l) || !*l) && digit && put_point(points + i, ln,
			digit - ln, l++ - digit) && change_range(points[i], d, &digit, &m))
			i++;
		else
			++l;
	if (digit && put_point(points + i, ln, digit - ln, l++ - digit))
		change_range(points[i], d, &digit, &m);
	return (points);
}
