/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 04:30:01 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 03:09:26 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_length(char const *s, char c)
{
	size_t	len;
	size_t	l;

	l = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) != c && *(s + len))
				len++;
			l++;
			s = (s + len);
		}
	}
	len = 0;
	return (l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**r;
	size_t	len;
	size_t	l;

	l = 0;
	if (!s || !c)
		return (0);
	if (!(r = (char **)ft_memalloc((split_length(s, c) + 1) * sizeof(char **))))
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) != c && *(s + len))
				len++;
			r[l++] = ft_strsub(s, 0, len);
			s = (s + len);
		}
	}
	r[l] = 0;
	return (r);
}
