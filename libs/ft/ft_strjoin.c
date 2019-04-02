/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 03:35:26 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:20 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		l;

	if (!s1 || !s2)
		return (0);
	l = ft_strlen(s1) + ft_strlen(s2);
	if (!(r = (char *)malloc(l + 1)))
		return (0);
	r[l] = '\0';
	l = 0;
	while (*s1)
		r[l++] = *s1++;
	while (*s2)
		r[l++] = *s2++;
	return (r);
}
