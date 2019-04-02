/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 07:35:59 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	*ra;
	unsigned char	*rb;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a < b)
		while (len--)
			*a++ = *b++;
	else
	{
		ra = a + len - 1;
		rb = b + len - 1;
		while (len--)
			*ra-- = *rb--;
	}
	return (dst);
}
