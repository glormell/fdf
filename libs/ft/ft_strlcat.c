/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 01:55:02 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:13:03 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*a;
	char	*b;
	size_t	l;
	size_t	s;

	a = (char *)dst;
	b = (char *)src;
	s = size;
	while (s-- && *a)
		a++;
	l = a - dst;
	s = size - l;
	if (!s)
		return (l + ft_strlen(b));
	while (*b)
	{
		if (s != 1)
		{
			*a++ = *b;
			s--;
		}
		b++;
	}
	*a = '\0';
	return (l + (b - src));
}
