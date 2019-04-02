/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 02:58:22 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*a;
	char	*b;
	int		i;

	a = (char *)haystack;
	b = (char *)needle;
	if (!(*b))
		return (a);
	while (*a)
	{
		i = 0;
		while (*(b + i) == *(a + i) && *(a + i))
			i++;
		if (!(*(b + i)))
			return (a);
		b = (char *)needle;
		a++;
	}
	return (0);
}
