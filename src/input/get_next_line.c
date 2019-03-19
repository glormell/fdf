/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:31:36 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:08:24 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input/get_next_line.h"

t_list	*get_cl(t_list **lfd, const int fd)
{
	t_list			*lst;

	lst = *lfd;
	while (lst)
		if ((int)lst->content_size == fd)
			return (lst);
		else
			lst = lst->next;
	ft_lstadd(lfd, ft_lstnew("", fd));
	return (*lfd);
}

void	put_line(char **line, t_list *cl)
{
	int				l;
	char			*p;
	char			*t;

	l = 0;
	t = cl->content;
	if ((p = ft_strchr(cl->content, '\n')))
		l = p - (char *)cl->content;
	else if ((p = ft_strchr(cl->content, '\0')))
		l = p - (char *)cl->content;
	if (l)
		*line = ft_strsub(cl->content, 0, l);
	else if (!l && (*p == '\n'))
		*line = ft_strnew(1);
	if (!(*p))
		return (ft_strclr(cl->content));
	cl->content = ft_strdup(p + 1);
	free(t);
}

int		get_next_line(const int fd, char **line)
{
	char			b[BUFF_SIZE + 1];
	static t_list	*lfd = 0;
	t_list			*cl;
	int				r;
	char			*t;

	if (fd < 0 || (read(fd, b, 0) == -1) || !line)
		return (-1);
	cl = get_cl(&lfd, fd);
	while ((r = read(fd, b, BUFF_SIZE)))
	{
		b[r] = '\0';
		t = cl->content;
		cl->content = ft_strjoin(cl->content, b);
		free(t);
		if (ft_strchr(b, '\n'))
			break ;
	}
	if (!r && !ft_strlen(cl->content))
		return (0);
	put_line(line, cl);
	return (1);
}
