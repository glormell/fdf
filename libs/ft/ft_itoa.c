/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 02:38:46 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 03:56:30 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_length(int n)
{
	size_t	len;

	len = (n < 0) ? 2 : 1;
	while ((n = n / 10))
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char	*r;
	int		len;

	len = itoa_length(n);
	if (!(r = (char *)ft_memalloc((len + 1) * sizeof(char *))))
		return (0);
	if (n < 0)
		r[0] = '-';
	else if (n == 0)
		r[0] = '0';
	while (len-- && n)
	{
		r[len] = (n < 0) ? (-(n % 10) + '0') : ((n % 10) + '0');
		n /= 10;
	}
	return (r);
}
