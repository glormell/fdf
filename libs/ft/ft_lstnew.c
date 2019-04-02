/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 05:54:24 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 08:53:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*r;

	if (!(r = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		r->content = NULL;
		r->content_size = 0;
	}
	else
	{
		if (!(r->content = ft_memalloc(content_size)))
		{
			free(r);
			return (NULL);
		}
		ft_memcpy(r->content, content, content_size);
		r->content_size = content_size;
		r->next = NULL;
	}
	return (r);
}
