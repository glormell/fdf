/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 00:25:49 by glormell          #+#    #+#             */
/*   Updated: 2018/11/27 21:08:40 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		size;
	int		i;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (!(r = (char *)malloc(size + 1)))
		return (0);
	r[size--] = '\0';
	i = -1;
	while (i++ < size)
		r[i] = f(i, s[i]);
	return (r);
}
