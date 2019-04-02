/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 07:54:42 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 08:45:39 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		next = ft_lstmap(lst->next, f);
		lst = f(lst);
		elem = ft_lstnew(lst->content, lst->content_size);
		ft_lstadd(&next, elem);
		return (next);
	}
	else
	{
		lst = f(lst);
		elem = ft_lstnew(lst->content, lst->content_size);
		elem->next = 0;
		return (elem);
	}
}
