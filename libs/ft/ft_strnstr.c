/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 03:31:22 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*a;
	char	*b;
	int		i;

	a = (char *)haystack;
	b = (char *)needle;
	if (!(*b))
		return (a);
	while (*a && len--)
	{
		i = 0;
		while (*(b + i) == *(a + i) && *(a + i) && (len - i + 1))
			i++;
		if (!(*(b + i)))
			return (a);
		b = (char *)needle;
		a++;
	}
	return (0);
}
