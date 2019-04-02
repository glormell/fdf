/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 07:13:23 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	u;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	u = (unsigned char)c;
	while (n--)
	{
		*a++ = *b;
		if (u != *b)
			b++;
		else
			return (a);
	}
	return (0);
}
